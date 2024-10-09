/********************************************************************************
** Form generated from reading UI file 'RegiestWin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIESTWIN_H
#define UI_REGIESTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegiestWin
{
public:
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *namelineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QRadioButton *manradioBt;
    QRadioButton *womanradioBt;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDateEdit *birthdaydateEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *addresslineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *phonelineEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *regiestpushBt;
    QPushButton *resetpushBt;
    QVBoxLayout *verticalLayout_2;
    QLabel *headpiclabel;
    QLineEdit *picfileEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addipgBt;
    QPushButton *videoSwitch;
    QPushButton *cameraBt;

    void setupUi(QWidget *RegiestWin)
    {
        if (RegiestWin->objectName().isEmpty())
            RegiestWin->setObjectName(QString::fromUtf8("RegiestWin"));
        RegiestWin->resize(705, 432);
        horizontalLayout_8 = new QHBoxLayout(RegiestWin);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(RegiestWin);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        namelineEdit = new QLineEdit(RegiestWin);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));
        namelineEdit->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(namelineEdit->sizePolicy().hasHeightForWidth());
        namelineEdit->setSizePolicy(sizePolicy);
        namelineEdit->setFont(font);

        horizontalLayout->addWidget(namelineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(RegiestWin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        manradioBt = new QRadioButton(RegiestWin);
        manradioBt->setObjectName(QString::fromUtf8("manradioBt"));
        manradioBt->setFont(font);

        horizontalLayout_2->addWidget(manradioBt);

        womanradioBt = new QRadioButton(RegiestWin);
        womanradioBt->setObjectName(QString::fromUtf8("womanradioBt"));
        womanradioBt->setFont(font);

        horizontalLayout_2->addWidget(womanradioBt);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(RegiestWin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        birthdaydateEdit = new QDateEdit(RegiestWin);
        birthdaydateEdit->setObjectName(QString::fromUtf8("birthdaydateEdit"));
        sizePolicy.setHeightForWidth(birthdaydateEdit->sizePolicy().hasHeightForWidth());
        birthdaydateEdit->setSizePolicy(sizePolicy);
        birthdaydateEdit->setFont(font);

        horizontalLayout_4->addWidget(birthdaydateEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(RegiestWin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        addresslineEdit = new QLineEdit(RegiestWin);
        addresslineEdit->setObjectName(QString::fromUtf8("addresslineEdit"));
        addresslineEdit->setEnabled(true);
        sizePolicy.setHeightForWidth(addresslineEdit->sizePolicy().hasHeightForWidth());
        addresslineEdit->setSizePolicy(sizePolicy);
        addresslineEdit->setFont(font);

        horizontalLayout_3->addWidget(addresslineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(RegiestWin);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        phonelineEdit = new QLineEdit(RegiestWin);
        phonelineEdit->setObjectName(QString::fromUtf8("phonelineEdit"));
        phonelineEdit->setEnabled(true);
        sizePolicy.setHeightForWidth(phonelineEdit->sizePolicy().hasHeightForWidth());
        phonelineEdit->setSizePolicy(sizePolicy);
        phonelineEdit->setFont(font);

        horizontalLayout_5->addWidget(phonelineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        regiestpushBt = new QPushButton(RegiestWin);
        regiestpushBt->setObjectName(QString::fromUtf8("regiestpushBt"));
        sizePolicy.setHeightForWidth(regiestpushBt->sizePolicy().hasHeightForWidth());
        regiestpushBt->setSizePolicy(sizePolicy);
        regiestpushBt->setFont(font);

        horizontalLayout_6->addWidget(regiestpushBt);

        resetpushBt = new QPushButton(RegiestWin);
        resetpushBt->setObjectName(QString::fromUtf8("resetpushBt"));
        sizePolicy.setHeightForWidth(resetpushBt->sizePolicy().hasHeightForWidth());
        resetpushBt->setSizePolicy(sizePolicy);
        resetpushBt->setFont(font);

        horizontalLayout_6->addWidget(resetpushBt);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_8->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        headpiclabel = new QLabel(RegiestWin);
        headpiclabel->setObjectName(QString::fromUtf8("headpiclabel"));
        sizePolicy.setHeightForWidth(headpiclabel->sizePolicy().hasHeightForWidth());
        headpiclabel->setSizePolicy(sizePolicy);
        headpiclabel->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));

        verticalLayout_2->addWidget(headpiclabel);

        picfileEdit = new QLineEdit(RegiestWin);
        picfileEdit->setObjectName(QString::fromUtf8("picfileEdit"));

        verticalLayout_2->addWidget(picfileEdit);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        addipgBt = new QPushButton(RegiestWin);
        addipgBt->setObjectName(QString::fromUtf8("addipgBt"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addipgBt->sizePolicy().hasHeightForWidth());
        addipgBt->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(addipgBt);

        videoSwitch = new QPushButton(RegiestWin);
        videoSwitch->setObjectName(QString::fromUtf8("videoSwitch"));
        sizePolicy1.setHeightForWidth(videoSwitch->sizePolicy().hasHeightForWidth());
        videoSwitch->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(videoSwitch);

        cameraBt = new QPushButton(RegiestWin);
        cameraBt->setObjectName(QString::fromUtf8("cameraBt"));
        sizePolicy1.setHeightForWidth(cameraBt->sizePolicy().hasHeightForWidth());
        cameraBt->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(cameraBt);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 1);

        horizontalLayout_8->addLayout(verticalLayout_2);


        retranslateUi(RegiestWin);

        QMetaObject::connectSlotsByName(RegiestWin);
    } // setupUi

    void retranslateUi(QWidget *RegiestWin)
    {
        RegiestWin->setWindowTitle(QCoreApplication::translate("RegiestWin", "Form", nullptr));
        label->setText(QCoreApplication::translate("RegiestWin", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("RegiestWin", "\345\247\223\345\220\215\357\274\232", nullptr));
        manradioBt->setText(QCoreApplication::translate("RegiestWin", "\347\224\267", nullptr));
        womanradioBt->setText(QCoreApplication::translate("RegiestWin", "\345\245\263", nullptr));
        label_4->setText(QCoreApplication::translate("RegiestWin", "\347\224\237\346\227\245\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("RegiestWin", "\345\234\260\345\235\200\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("RegiestWin", "\347\224\265\350\257\235\357\274\232", nullptr));
        regiestpushBt->setText(QCoreApplication::translate("RegiestWin", "\346\263\250\345\206\214", nullptr));
        resetpushBt->setText(QCoreApplication::translate("RegiestWin", "\351\207\215\347\275\256", nullptr));
        headpiclabel->setText(QString());
        addipgBt->setText(QCoreApplication::translate("RegiestWin", "\346\267\273\345\212\240\345\244\264\345\203\217", nullptr));
        videoSwitch->setText(QCoreApplication::translate("RegiestWin", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
        cameraBt->setText(QCoreApplication::translate("RegiestWin", "\346\213\215\347\205\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegiestWin: public Ui_RegiestWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIESTWIN_H
