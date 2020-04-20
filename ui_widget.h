/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listWidget_md5;
    QListWidget *listWidget_filePath;
    QProgressBar *progressBar;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(600, 400);
        Widget->setMinimumSize(QSize(600, 400));
        Widget->setMaximumSize(QSize(600, 400));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String("#widget{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 6px\n"
"}"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(42, 42));
        pushButton_3->setMaximumSize(QSize(42, 42));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(227, 213, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(193, 197, 255);\n"
"}"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(42, 42));
        pushButton_2->setMaximumSize(QSize(42, 42));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(227, 213, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(193, 197, 255);\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(42, 42));
        pushButton->setMaximumSize(QSize(42, 42));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border:none;\n"
"	border-top-right-radius:6px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	\n"
"	\n"
"	background-color: rgb(255, 85, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(255, 0, 0);\n"
"}"));

        horizontalLayout->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        frame = new QFrame(widget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pushButton_4);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        listWidget_md5 = new QListWidget(frame);
        listWidget_md5->setObjectName(QStringLiteral("listWidget_md5"));

        horizontalLayout_3->addWidget(listWidget_md5);

        listWidget_filePath = new QListWidget(frame);
        listWidget_filePath->setObjectName(QStringLiteral("listWidget_filePath"));

        horizontalLayout_3->addWidget(listWidget_filePath);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        progressBar = new QProgressBar(frame);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        gridLayout_3->addWidget(progressBar, 2, 0, 1, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\351\273\221\345\225\244\346\226\207\344\273\266\351\207\215\345\244\215\346\243\200\346\265\213\345\267\245\345\205\267", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "-", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "\342\226\241", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\303\227", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Widget", "\350\216\267\345\217\226\346\226\207\344\273\266\350\267\257\345\276\204", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
