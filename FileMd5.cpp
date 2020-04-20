#include "FileMd5.h"
#include <QFile>
#include <QDir>
#include <QApplication>
#include <QMessageBox>
//解析文件MD5值
#include <QCryptographicHash>
#include <QFileDialog>

FileMd5::FileMd5(QObject *parent) : QObject(parent)
{

}

QStringList FileMd5::getFiles(const QString &path)
{
    QStringList ret;
    QDir dir(path);
    //QDir::Dirs碰到隐藏目录会报错,所以使用Dir::AllDirs
    QFileInfoList fileInfoList = dir.entryInfoList(QDir::Files|QDir::NoDotAndDotDot|QDir::Dirs);
    for(int i = 0; i <fileInfoList.count(); ++i){
        if(fileInfoList[i].isDir()){
            QStringList files = getFiles(fileInfoList[i].absoluteFilePath());
            ret.append(files);
        }
        else{
            ret.append(fileInfoList[i].absoluteFilePath());
        }
    }
    return ret;
}

QByteArray FileMd5::getFileMd5(const QString &fileName)
{
    QCryptographicHash hash(QCryptographicHash::Md5);
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly)){
        //QMessageBox::information(this,"information","打开文件失败");
        return QByteArray();
    }

    while (!file.atEnd()) {
        QByteArray text = file.read(1024*10);
        hash.addData(text);
        qApp->processEvents();
    }

    QByteArray fileMd5 = hash.result();

    return fileMd5;

}
