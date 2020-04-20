#ifndef WIDGET_H
#define WIDGET_H

#include <iostream>
#include <memory>
#include <QWidget>
#include <QThread>
#include <QHash>
#include <QPushButton>
#include <QMouseEvent>
#include "FileMd5.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void mouseMoveEvent(QMouseEvent *event);

    void mousePressEvent(QMouseEvent *event);

    void mouseReleaseEvent(QMouseEvent *event);
signals:
    void getProcess(int current, int total);

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void setProcess(int current, int total);

    void on_listWidget_md5_currentTextChanged(const QString &currentText);

private:
    Ui::Widget *ui;
    QPoint z;
    std::shared_ptr<FileMd5> md5;
    QHash<QByteArray,QStringList> md5Hash;

};

#endif // WIDGET_H
