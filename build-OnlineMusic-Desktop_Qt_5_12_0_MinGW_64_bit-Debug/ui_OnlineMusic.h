/********************************************************************************
** Form generated from reading UI file 'OnlineMusic.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONLINEMUSIC_H
#define UI_ONLINEMUSIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OnlineMusic
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_Min;
    QPushButton *pushButton_CUI;
    QPushButton *pushButton_close;
    QPushButton *pushButton_6;
    QGroupBox *groupBox;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OnlineMusic)
    {
        if (OnlineMusic->objectName().isEmpty())
            OnlineMusic->setObjectName(QString::fromUtf8("OnlineMusic"));
        OnlineMusic->resize(800, 480);
        OnlineMusic->setStyleSheet(QString::fromUtf8("OnlineMusic background-image: url(:/image/image/bmp.png);"));
        centralWidget = new QWidget(OnlineMusic);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(210, 70, 411, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 70, 121, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton_Min = new QPushButton(centralWidget);
        pushButton_Min->setObjectName(QString::fromUtf8("pushButton_Min"));
        pushButton_Min->setGeometry(QRect(650, 0, 51, 51));
        pushButton_Min->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    background-image: url(:/image/image/help.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	/*background-image: url(:/image/image/help.png);*/\n"
"    background-color: rgba(157, 157, 157, 0.5); /* \344\275\277\347\224\250 rgba */\n"
"}\n"
"\n"
"QPushButton:pressed { /* \344\277\256\346\255\243\345\210\206\345\217\267 */\n"
"    background-color: rgba(95, 95, 95, 0.39); /* \351\200\217\346\230\216\345\272\246\345\272\224\344\270\2720\345\210\2601\344\271\213\351\227\264 */\n"
"    border-color: rgba(255, 255, 255, 0.12); /* \351\200\217\346\230\216\345\272\246\345\272\224\344\270\2720\345\210\2601\344\271\213\351\227\264 */\n"
"    border-style: inset;\n"
"    border-width: 1px; /* \346\267\273\345\212\240\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    color: rgba(0, 0, 0, 1); /* \351\242\234\350\211\262\347\232\204\351\200\217\346\230\216\345\272\246 "
                        "*/\n"
"}"));
        pushButton_Min->setIconSize(QSize(20, 20));
        pushButton_CUI = new QPushButton(centralWidget);
        pushButton_CUI->setObjectName(QString::fromUtf8("pushButton_CUI"));
        pushButton_CUI->setGeometry(QRect(700, 0, 51, 51));
        pushButton_CUI->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    background-image: url(:/image/image/pifu.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	/*background-image: url(:/image/image/help.png);*/\n"
"    background-color: rgba(157, 157, 157, 0.5); /* \344\275\277\347\224\250 rgba */\n"
"}\n"
"\n"
"QPushButton:pressed { /* \344\277\256\346\255\243\345\210\206\345\217\267 */\n"
"    background-color: rgba(95, 95, 95, 0.39); /* \351\200\217\346\230\216\345\272\246\345\272\224\344\270\2720\345\210\2601\344\271\213\351\227\264 */\n"
"    border-color: rgba(255, 255, 255, 0.12); /* \351\200\217\346\230\216\345\272\246\345\272\224\344\270\2720\345\210\2601\344\271\213\351\227\264 */\n"
"    border-style: inset;\n"
"    border-width: 1px; /* \346\267\273\345\212\240\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    color: rgba(0, 0, 0, 1); /* \351\242\234\350\211\262\347\232\204\351\200\217\346\230\216\345\272\246 "
                        "*/\n"
"}"));
        pushButton_CUI->setIconSize(QSize(20, 20));
        pushButton_close = new QPushButton(centralWidget);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(750, 0, 51, 51));
        pushButton_close->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    background-image: url(:/image/image/close.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center center;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	/*background-image: url(:/image/image/help.png);*/\n"
"    background-color: rgba(157, 157, 157, 0.5); /* \344\275\277\347\224\250 rgba */\n"
"}\n"
"\n"
"QPushButton:pressed { /* \344\277\256\346\255\243\345\210\206\345\217\267 */\n"
"    background-color: rgba(95, 95, 95, 0.39); /* \351\200\217\346\230\216\345\272\246\345\272\224\344\270\2720\345\210\2601\344\271\213\351\227\264 */\n"
"    border-color: rgba(255, 255, 255, 0.12); /* \351\200\217\346\230\216\345\272\246\345\272\224\344\270\2720\345\210\2601\344\271\213\351\227\264 */\n"
"    border-style: inset;\n"
"    border-width: 1px; /* \346\267\273\345\212\240\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"    color: rgba(0, 0, 0, 1); /* \351\242\234\350\211\262\347\232\204\351\200\217\346\230\216\345\272\246"
                        " */\n"
"}"));
        pushButton_close->setIconSize(QSize(20, 20));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 70, 151, 31));
        pushButton_6->setFont(font1);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 781, 71));
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255, 50);"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 160, 211, 192));
        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(560, 160, 211, 192));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(270, 160, 256, 192));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 140, 54, 12));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(360, 140, 54, 12));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(630, 140, 54, 12));
        OnlineMusic->setCentralWidget(centralWidget);
        groupBox->raise();
        lineEdit->raise();
        pushButton->raise();
        pushButton_Min->raise();
        pushButton_CUI->raise();
        pushButton_close->raise();
        pushButton_6->raise();
        listWidget->raise();
        listWidget_2->raise();
        textBrowser->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        mainToolBar = new QToolBar(OnlineMusic);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        OnlineMusic->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(OnlineMusic);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 23));
        OnlineMusic->setMenuBar(menuBar);
        statusBar = new QStatusBar(OnlineMusic);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        OnlineMusic->setStatusBar(statusBar);

        retranslateUi(OnlineMusic);

        QMetaObject::connectSlotsByName(OnlineMusic);
    } // setupUi

    void retranslateUi(QMainWindow *OnlineMusic)
    {
        OnlineMusic->setWindowTitle(QApplication::translate("OnlineMusic", "OnlineMusic", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("OnlineMusic", "\350\257\267\350\276\223\345\205\245\346\255\214\346\233\262\345\220\215", nullptr));
        pushButton->setText(QApplication::translate("OnlineMusic", "\346\220\234\347\264\242", nullptr));
        pushButton_Min->setText(QString());
        pushButton_CUI->setText(QString());
        pushButton_close->setText(QString());
        pushButton_6->setText(QApplication::translate("OnlineMusic", "\346\220\234\347\264\242\346\255\214\346\233\262\345\220\215\347\247\260\357\274\232", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("OnlineMusic", "\346\220\234\347\264\242\347\273\223\346\236\234", nullptr));
        label_2->setText(QApplication::translate("OnlineMusic", "\346\255\214\350\257\215", nullptr));
        label_3->setText(QApplication::translate("OnlineMusic", "\345\216\206\345\217\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OnlineMusic: public Ui_OnlineMusic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONLINEMUSIC_H
