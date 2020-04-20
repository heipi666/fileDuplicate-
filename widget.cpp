#include "widget.h"
#include "ui_widget.h"
#include <QStringList>
#include <QDebug>
#include <QGraphicsDropShadowEffect>
#include <QFile>
#include <QDir>
#include <QApplication>
#include <QMessageBox>
//解析文件MD5值
#include <QCryptographicHash>
#include <QFileDialog>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),md5(new FileMd5())
{
    ui->setupUi(this);
    //设置无边框
    this->setWindowFlags(Qt::FramelessWindowHint);

    QGraphicsDropShadowEffect * shadow = new QGraphicsDropShadowEffect();
    //渲染的像素点
    shadow->setBlurRadius(10);
    //渲染的颜色
    shadow->setColor(Qt::black);
    //渲染相对于组件的偏移
    shadow->setOffset(0);

    ui->widget->setGraphicsEffect(shadow);
    //设置主窗口为透明
    this->setAttribute(Qt::WA_TranslucentBackground);


    connect(this,Widget::getProcess,this,Widget::setProcess);

}

Widget::~Widget()
{

    delete ui;
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    //我们重写鼠标事件，只是在原来的鼠标基础事件上加上新的功能，所以仍需要父类的鼠标事件
    QWidget::mouseMoveEvent(event);
    //当鼠标按到控件上时,鼠标事件被控件捕捉，所以我们获得空的点击，直接返回
    if(z == QPoint()){
        return ;
    }
    //鼠标移到哪，窗口就移动到哪
    //因为鼠标按下的位置跟鼠标左上角的位置是相对固定的
    QPoint y = event->globalPos();
    //桌面左上角的点 - 鼠标相对于窗口左上角的点=窗口相对于桌面所在的位置
    this->move(y-z);

}

void Widget::mousePressEvent(QMouseEvent *event)
{
    //我们重写鼠标事件，只是在原来的鼠标基础事件上加上新的功能，所以仍需要父类的鼠标事件
    QWidget::mouseMoveEvent(event);
    //x为鼠标点相对于窗口左上角的位置
    QPoint x = this->geometry().topLeft();
    //y为鼠标点击位置相对于桌面左上角所在的位置
    QPoint y = event->globalPos();
    //z为窗口相对于桌面左上角的位置
    z = y-x;

}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    //我们重写鼠标事件，只是在原来的鼠标基础事件上加上新的功能，所以仍需要父类的鼠标事件
    QWidget::mouseMoveEvent(event);
    //将z清空
    this->z = QPoint();
}

//关闭窗口
void Widget::on_pushButton_clicked()
{
    this->close();
}

// 窗口最大化
void Widget::on_pushButton_2_clicked()
{
    if(!isMaximized()){
        //因为存在最外层布局的边框，所以无法全屏，所以需要将Margin设置为0
        ui->gridLayout->setMargin(0);
        this->showMaximized();
    }
    else{
        //取消最大化后，需要恢复阴影效果，所以恢复边距
        ui->gridLayout->setMargin(9);
        this->showNormal();
    }
}

//窗口最小化
void Widget::on_pushButton_3_clicked()
{
    this->showMinimized();
}

void Widget::on_pushButton_4_clicked()
{
    //清空MD5Hash
    md5Hash.clear();
    //获取文件的起始目录
    QString path = QFileDialog::getExistingDirectory(this);
    //将控件清空
    ui->lineEdit->setText(path);
    ui->progressBar->setValue(0);
    ui->listWidget_md5->clear();
    //获取起始目录下的所有文件路径
    QStringList fileList = md5->getFiles(path);
    //遍历所有文件 获得所有文件的MD5 并存入hash表
    for(int i= 0; i < fileList.count();++i){
        QByteArray fileMd5 = md5->getFileMd5(fileList[i]).toHex();
        md5Hash[fileMd5].append(fileList[i]);
        emit getProcess(i+1,fileList.count());

    }
    // 遍历哈希表，找出一个MD5对应多个值的 并将md5的值放到ListWiget上显示
    for(auto it = md5Hash.begin(); it != md5Hash.end(); ++it){
        if(it.value().count() > 1){
            ui->listWidget_md5->addItem(it.key());
        }
    }

}

//设置进度条
void Widget::setProcess(int current, int total)
{
    ui->progressBar->setMaximum(total);
    ui->progressBar->setValue(current);
}

//通过显示Md5的控件的信号,找到对应重复文件路径 并予以显示
void Widget::on_listWidget_md5_currentTextChanged(const QString &currentText)
{
    ui->listWidget_filePath->clear();
    QByteArray tmp = currentText.toLocal8Bit();
    QStringList list = md5Hash[tmp];
    ui->listWidget_filePath->addItems(list);

}
