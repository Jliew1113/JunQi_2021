/********************************************************************************
** Form generated from reading UI file 'create.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_H
#define UI_CREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Create
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *Host;
    QLabel *IP;
    QLabel *succ;
    QLabel *confirm;

    void setupUi(QDialog *Create)
    {
        if (Create->objectName().isEmpty())
            Create->setObjectName(QString::fromUtf8("Create"));
        Create->resize(400, 300);
        buttonBox = new QDialogButtonBox(Create);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Host = new QLabel(Create);
        Host->setObjectName(QString::fromUtf8("Host"));
        Host->setGeometry(QRect(70, 84, 81, 91));
        QFont font;
        font.setPointSize(16);
        Host->setFont(font);
        IP = new QLabel(Create);
        IP->setObjectName(QString::fromUtf8("IP"));
        IP->setGeometry(QRect(180, 110, 171, 41));
        IP->setFont(font);
        succ = new QLabel(Create);
        succ->setObjectName(QString::fromUtf8("succ"));
        succ->setGeometry(QRect(25, 233, 171, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        succ->setFont(font1);
        confirm = new QLabel(Create);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(60, 218, 151, 71));

        retranslateUi(Create);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Create, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Create);
    } // setupUi

    void retranslateUi(QDialog *Create)
    {
        Create->setWindowTitle(QCoreApplication::translate("Create", "Create Connection", nullptr));
        Host->setText(QCoreApplication::translate("Create", "Host IP:", nullptr));
        IP->setText(QString());
        succ->setText(QCoreApplication::translate("Create", "Server Created", nullptr));
        confirm->setText(QCoreApplication::translate("Create", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Confirm?</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Create: public Ui_Create {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_H
