/********************************************************************************
** Form generated from reading UI file 'FaceRecognize.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACERECOGNIZE_H
#define UI_FACERECOGNIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceRecognize
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_LB;
    QLabel *label_2;
    QLabel *label;
    QWidget *widget_3;
    QLabel *titleLB;
    QLabel *headLB;
    QWidget *widget_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QWidget *widget_5;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QWidget *widget_6;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QWidget *widget_7;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QWidget *widget_8;
    QLabel *titleLB_2;
    QLabel *headLB_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_9;
    QLabel *label_9;
    QLineEdit *lineEdit_workerid;
    QWidget *widget_10;
    QLabel *label_10;
    QLineEdit *lineEdit_name;
    QWidget *widget_11;
    QLabel *label_11;
    QLineEdit *lineEdit_work;
    QWidget *widget_12;
    QLabel *label_12;
    QLineEdit *lineEdit_time;

    void setupUi(QMainWindow *FaceRecognize)
    {
        if (FaceRecognize->objectName().isEmpty())
            FaceRecognize->setObjectName(QString::fromUtf8("FaceRecognize"));
        FaceRecognize->resize(800, 480);
        centralwidget = new QWidget(FaceRecognize);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 480, 480));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(49, 71, 65);"));
        widget_LB = new QWidget(widget);
        widget_LB->setObjectName(QString::fromUtf8("widget_LB"));
        widget_LB->setGeometry(QRect(100, 380, 231, 51));
        widget_LB->setStyleSheet(QString::fromUtf8("background-color: rgba(31, 32, 36, 69);"));
        label_2 = new QLabel(widget_LB);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 231, 51));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgba(31, 32, 36, 69);"));
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 480, 480));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(23);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->raise();
        widget_LB->raise();
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(480, 0, 320, 480));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius: 4px;\n"
"	background-color: rgb(37, 40, 49);\n"
"}\n"
"\n"
"QWidget#titleLB{\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"	background-color: rgb(61, 61, 61);\n"
"}\n"
"\n"
"QWidget#headLB{\n"
"	border-radius: 50px;\n"
"	\n"
"	background-color: rgb(61, 61, 61);\n"
"}"));
        titleLB = new QLabel(widget_3);
        titleLB->setObjectName(QString::fromUtf8("titleLB"));
        titleLB->setGeometry(QRect(0, 0, 320, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(24);
        titleLB->setFont(font1);
        titleLB->setAlignment(Qt::AlignCenter);
        headLB = new QLabel(widget_3);
        headLB->setObjectName(QString::fromUtf8("headLB"));
        headLB->setGeometry(QRect(110, 70, 100, 100));
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(20, 180, 271, 51));
        widget_4->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius: 4px;\n"
"	background-color: rgb(60, 60, 60);\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: #20232A;\n"
"	\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"}"));
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 41, 31));
        lineEdit = new QLineEdit(widget_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 10, 171, 31));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(30, 250, 271, 51));
        widget_5->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius: 4px;\n"
"	background-color: rgb(60, 60, 60);\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: #20232A;\n"
"	\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"}"));
        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 41, 31));
        lineEdit_2 = new QLineEdit(widget_5);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 10, 171, 31));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(30, 320, 271, 51));
        widget_6->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius: 4px;\n"
"	background-color: rgb(60, 60, 60);\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: #20232A;\n"
"	\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"}"));
        label_7 = new QLabel(widget_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 41, 31));
        lineEdit_3 = new QLineEdit(widget_6);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(90, 10, 171, 31));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(30, 390, 271, 51));
        widget_7->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius: 4px;\n"
"	background-color: rgb(60, 60, 60);\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: #20232A;\n"
"	\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"}"));
        label_8 = new QLabel(widget_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 41, 31));
        lineEdit_4 = new QLineEdit(widget_7);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(90, 10, 171, 31));
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);
        widget_8 = new QWidget(widget_3);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(0, 0, 320, 480));
        widget_8->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius: 4px;\n"
"	background-color: rgb(255, 255, 200);\n"
"}\n"
"\n"
"QWidget#titleLB{\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"	background-color: rgb(61, 61, 61);\n"
"}\n"
"\n"
"QWidget#headLB{\n"
"	border-radius: 65px;\n"
"	\n"
"	background-color: rgb(61, 61, 61);\n"
"}"));
        titleLB_2 = new QLabel(widget_8);
        titleLB_2->setObjectName(QString::fromUtf8("titleLB_2"));
        titleLB_2->setGeometry(QRect(0, 0, 320, 60));
        titleLB_2->setFont(font1);
        titleLB_2->setStyleSheet(QString::fromUtf8("\n"
"	\n"
"background-color: rgb(61, 61, 61);"));
        titleLB_2->setAlignment(Qt::AlignCenter);
        headLB_2 = new QLabel(widget_8);
        headLB_2->setObjectName(QString::fromUtf8("headLB_2"));
        headLB_2->setGeometry(QRect(90, 70, 130, 130));
        headLB_2->setStyleSheet(QString::fromUtf8("	border-radius: 65px;\n"
"	\n"
"	background-color: rgb(61, 61, 61);"));
        layoutWidget = new QWidget(widget_8);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 210, 301, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_9 = new QWidget(layoutWidget);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius: 4px;\n"
"	background-color: rgb(60, 60, 60);\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: #20232A;\n"
"	\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"}"));
        label_9 = new QLabel(widget_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 0, 51, 61));
        lineEdit_workerid = new QLineEdit(widget_9);
        lineEdit_workerid->setObjectName(QString::fromUtf8("lineEdit_workerid"));
        lineEdit_workerid->setEnabled(false);
        lineEdit_workerid->setGeometry(QRect(80, 0, 221, 61));
        sizePolicy.setHeightForWidth(lineEdit_workerid->sizePolicy().hasHeightForWidth());
        lineEdit_workerid->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widget_9);

        widget_10 = new QWidget(layoutWidget);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius: 4px;\n"
"	background-color: rgb(60, 60, 60);\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: #20232A;\n"
"	\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"}"));
        label_10 = new QLabel(widget_10);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 0, 61, 61));
        lineEdit_name = new QLineEdit(widget_10);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setEnabled(false);
        lineEdit_name->setGeometry(QRect(80, 0, 221, 61));
        sizePolicy.setHeightForWidth(lineEdit_name->sizePolicy().hasHeightForWidth());
        lineEdit_name->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widget_10);

        widget_11 = new QWidget(layoutWidget);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius: 4px;\n"
"	background-color: rgb(60, 60, 60);\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: #20232A;\n"
"	\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"}"));
        label_11 = new QLabel(widget_11);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 0, 51, 61));
        lineEdit_work = new QLineEdit(widget_11);
        lineEdit_work->setObjectName(QString::fromUtf8("lineEdit_work"));
        lineEdit_work->setEnabled(false);
        lineEdit_work->setGeometry(QRect(80, 0, 221, 61));
        sizePolicy.setHeightForWidth(lineEdit_work->sizePolicy().hasHeightForWidth());
        lineEdit_work->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widget_11);

        widget_12 = new QWidget(layoutWidget);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius: 4px;\n"
"	background-color: rgb(60, 60, 60);\n"
"}\n"
"QLabel{\n"
"	border:none;\n"
"	color: #20232A;\n"
"	\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"}"));
        label_12 = new QLabel(widget_12);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 0, 51, 61));
        lineEdit_time = new QLineEdit(widget_12);
        lineEdit_time->setObjectName(QString::fromUtf8("lineEdit_time"));
        lineEdit_time->setEnabled(false);
        lineEdit_time->setGeometry(QRect(80, 0, 221, 61));
        sizePolicy.setHeightForWidth(lineEdit_time->sizePolicy().hasHeightForWidth());
        lineEdit_time->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widget_12);

        FaceRecognize->setCentralWidget(centralwidget);

        retranslateUi(FaceRecognize);

        QMetaObject::connectSlotsByName(FaceRecognize);
    } // setupUi

    void retranslateUi(QMainWindow *FaceRecognize)
    {
        FaceRecognize->setWindowTitle(QCoreApplication::translate("FaceRecognize", "FaceRecognize", nullptr));
        label_2->setText(QCoreApplication::translate("FaceRecognize", "\350\256\244\350\257\201\346\210\220\345\212\237", nullptr));
        label->setText(QCoreApplication::translate("FaceRecognize", "\344\272\272\350\204\270\350\257\206\345\210\253\345\214\272\345\237\237", nullptr));
        titleLB->setText(QCoreApplication::translate("FaceRecognize", "\344\272\272\350\204\270\350\257\206\350\200\203\345\213\244\345\210\253\347\263\273\347\273\237", nullptr));
        headLB->setText(QCoreApplication::translate("FaceRecognize", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("FaceRecognize", "\345\267\245\345\217\267", nullptr));
        lineEdit->setText(QCoreApplication::translate("FaceRecognize", "12312321", nullptr));
        label_6->setText(QCoreApplication::translate("FaceRecognize", "\345\247\223\345\220\215", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("FaceRecognize", "12312321", nullptr));
        label_7->setText(QCoreApplication::translate("FaceRecognize", "\351\203\250\351\227\250", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("FaceRecognize", "12312321", nullptr));
        label_8->setText(QCoreApplication::translate("FaceRecognize", "\346\227\266\351\227\264", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("FaceRecognize", "12312321", nullptr));
        titleLB_2->setText(QCoreApplication::translate("FaceRecognize", "\344\272\272\350\204\270\350\257\206\350\200\203\345\213\244\345\210\253\347\263\273\347\273\237", nullptr));
        headLB_2->setText(QString());
        label_9->setText(QCoreApplication::translate("FaceRecognize", "\345\267\245\345\217\267", nullptr));
        lineEdit_workerid->setText(QCoreApplication::translate("FaceRecognize", "1", nullptr));
        label_10->setText(QCoreApplication::translate("FaceRecognize", "\345\247\223\345\220\215", nullptr));
        lineEdit_name->setText(QCoreApplication::translate("FaceRecognize", "liyong", nullptr));
        label_11->setText(QCoreApplication::translate("FaceRecognize", "\351\203\250\351\227\250", nullptr));
        lineEdit_work->setText(QCoreApplication::translate("FaceRecognize", "wh2404", nullptr));
        label_12->setText(QCoreApplication::translate("FaceRecognize", "\346\227\266\351\227\264", nullptr));
        lineEdit_time->setText(QCoreApplication::translate("FaceRecognize", "2024", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FaceRecognize: public Ui_FaceRecognize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACERECOGNIZE_H
