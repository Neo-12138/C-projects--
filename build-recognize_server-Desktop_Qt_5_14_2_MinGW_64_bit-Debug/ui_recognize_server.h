/********************************************************************************
** Form generated from reading UI file 'recognize_server.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECOGNIZE_SERVER_H
#define UI_RECOGNIZE_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "regiestwin.h"
#include "selectwin.h"

QT_BEGIN_NAMESPACE

class Ui_recognize_server
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *showWidget;
    QLabel *label;
    QLabel *now_time;
    QLabel *label_2;
    QCalendarWidget *calendarWidget;
    RegiestWin *regiestWidget;
    SelectWin *selectWidget;

    void setupUi(QMainWindow *recognize_server)
    {
        if (recognize_server->objectName().isEmpty())
            recognize_server->setObjectName(QString::fromUtf8("recognize_server"));
        recognize_server->resize(800, 600);
        recognize_server->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(recognize_server);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        showWidget = new QWidget();
        showWidget->setObjectName(QString::fromUtf8("showWidget"));
        label = new QLabel(showWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 381, 421));
        label->setStyleSheet(QString::fromUtf8("\n"
" border: 2px solid rgb(0, 0, 0); "));
        now_time = new QLabel(showWidget);
        now_time->setObjectName(QString::fromUtf8("now_time"));
        now_time->setGeometry(QRect(50, 480, 291, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        now_time->setFont(font);
        now_time->setStyleSheet(QString::fromUtf8(" border: 2px solid rgb(0, 0, 0); "));
        now_time->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(showWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 30, 341, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(22);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8(" border: 2px solid rgb(0, 0, 0); "));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        calendarWidget = new QCalendarWidget(showWidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(420, 180, 331, 251));
        tabWidget->addTab(showWidget, QString());
        regiestWidget = new RegiestWin();
        regiestWidget->setObjectName(QString::fromUtf8("regiestWidget"));
        tabWidget->addTab(regiestWidget, QString());
        selectWidget = new SelectWin();
        selectWidget->setObjectName(QString::fromUtf8("selectWidget"));
        tabWidget->addTab(selectWidget, QString());

        horizontalLayout->addWidget(tabWidget);

        recognize_server->setCentralWidget(centralwidget);

        retranslateUi(recognize_server);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(recognize_server);
    } // setupUi

    void retranslateUi(QMainWindow *recognize_server)
    {
        recognize_server->setWindowTitle(QCoreApplication::translate("recognize_server", "recognize_server", nullptr));
        label->setText(QString());
        now_time->setText(QString());
        label_2->setText(QCoreApplication::translate("recognize_server", "   \346\231\272\350\203\275\350\200\203\345\213\244\347\263\273\347\273\237\346\234\215\345\212\241\345\231\250\347\225\214\351\235\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(showWidget), QCoreApplication::translate("recognize_server", "\350\200\203\345\213\244 \345\233\276\345\203\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(regiestWidget), QCoreApplication::translate("recognize_server", "\346\263\250\345\206\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(selectWidget), QCoreApplication::translate("recognize_server", " \346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recognize_server: public Ui_recognize_server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECOGNIZE_SERVER_H
