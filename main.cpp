#include "widget.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QTextCodec *code = QTextCodec::codecForName("UTF_8");
    QTextCodec::setCodecForLocale(code);
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
