/********************************************************************************
** Form generated from reading UI file 'connect.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECT_H
#define UI_CONNECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Connect
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *ip;
    QLabel *please;
    QLabel *error;
    QLabel *error_2;

    void setupUi(QDialog *Connect)
    {
        if (Connect->objectName().isEmpty())
            Connect->setObjectName(QString::fromUtf8("Connect"));
        Connect->resize(400, 300);
        buttonBox = new QDialogButtonBox(Connect);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        ip = new QLineEdit(Connect);
        ip->setObjectName(QString::fromUtf8("ip"));
        ip->setGeometry(QRect(50, 140, 301, 31));
        QFont font;
        font.setPointSize(13);
        ip->setFont(font);
        please = new QLabel(Connect);
        please->setObjectName(QString::fromUtf8("please"));
        please->setGeometry(QRect(50, 100, 301, 41));
        QFont font1;
        font1.setPointSize(14);
        please->setFont(font1);
        error = new QLabel(Connect);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(24, 240, 171, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        error->setFont(font2);
        error_2 = new QLabel(Connect);
        error_2->setObjectName(QString::fromUtf8("error_2"));
        error_2->setGeometry(QRect(22, 240, 171, 31));
        error_2->setFont(font2);

        retranslateUi(Connect);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Connect, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Connect);
    } // setupUi

    void retranslateUi(QDialog *Connect)
    {
        Connect->setWindowTitle(QCoreApplication::translate("Connect", "Connect to Server", nullptr));
        ip->setText(QString());
        please->setText(QCoreApplication::translate("Connect", "Please Enter IP:", nullptr));
        error->setText(QCoreApplication::translate("Connect", "<html><head/><body><p><span style=\" color:#ff0000;\">Wrong Format!</span></p></body></html>", nullptr));
        error_2->setText(QCoreApplication::translate("Connect", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff0000;\">Server Not Found</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Connect: public Ui_Connect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECT_H
