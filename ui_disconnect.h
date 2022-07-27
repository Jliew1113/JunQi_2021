/********************************************************************************
** Form generated from reading UI file 'disconnect.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISCONNECT_H
#define UI_DISCONNECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Disconnect
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *succ;

    void setupUi(QDialog *Disconnect)
    {
        if (Disconnect->objectName().isEmpty())
            Disconnect->setObjectName(QString::fromUtf8("Disconnect"));
        Disconnect->resize(400, 300);
        buttonBox = new QDialogButtonBox(Disconnect);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Disconnect);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(35, 100, 371, 91));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        succ = new QLabel(Disconnect);
        succ->setObjectName(QString::fromUtf8("succ"));
        succ->setGeometry(QRect(110, 120, 171, 51));

        retranslateUi(Disconnect);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Disconnect, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Disconnect, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Disconnect);
    } // setupUi

    void retranslateUi(QDialog *Disconnect)
    {
        Disconnect->setWindowTitle(QCoreApplication::translate("Disconnect", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Disconnect", "<html><head/><body><p><span style=\" font-size:16pt;\">Are You Sure Want to </span><span style=\" font-size:16pt; color:#ff0000;\">Disconnect</span><span style=\" font-size:16pt;\">?</span></p></body></html>", nullptr));
        succ->setText(QCoreApplication::translate("Disconnect", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#ff0000;\">Disconnected</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Disconnect: public Ui_Disconnect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISCONNECT_H
