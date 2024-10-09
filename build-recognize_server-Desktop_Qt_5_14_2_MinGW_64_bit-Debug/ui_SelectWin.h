/********************************************************************************
** Form generated from reading UI file 'SelectWin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIN_H
#define UI_SELECTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectWin
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *userRb;
    QRadioButton *timeRb;
    QPushButton *selectBt;
    QTableView *tableView;

    void setupUi(QWidget *SelectWin)
    {
        if (SelectWin->objectName().isEmpty())
            SelectWin->setObjectName(QString::fromUtf8("SelectWin"));
        SelectWin->resize(669, 483);
        verticalLayout = new QVBoxLayout(SelectWin);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        userRb = new QRadioButton(SelectWin);
        userRb->setObjectName(QString::fromUtf8("userRb"));

        horizontalLayout->addWidget(userRb);

        timeRb = new QRadioButton(SelectWin);
        timeRb->setObjectName(QString::fromUtf8("timeRb"));

        horizontalLayout->addWidget(timeRb);

        selectBt = new QPushButton(SelectWin);
        selectBt->setObjectName(QString::fromUtf8("selectBt"));

        horizontalLayout->addWidget(selectBt);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(SelectWin);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(SelectWin);

        QMetaObject::connectSlotsByName(SelectWin);
    } // setupUi

    void retranslateUi(QWidget *SelectWin)
    {
        SelectWin->setWindowTitle(QCoreApplication::translate("SelectWin", "Form", nullptr));
        userRb->setText(QCoreApplication::translate("SelectWin", "\345\221\230\345\267\245\344\277\241\346\201\257", nullptr));
        timeRb->setText(QCoreApplication::translate("SelectWin", "\350\200\203\345\213\244\344\277\241\346\201\257", nullptr));
        selectBt->setText(QCoreApplication::translate("SelectWin", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectWin: public Ui_SelectWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIN_H
