/********************************************************************************
** Form generated from reading UI file 'forfeit.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORFEIT_H
#define UI_FORFEIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Forfeit
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *Forfeit)
    {
        if (Forfeit->objectName().isEmpty())
            Forfeit->setObjectName(QString::fromUtf8("Forfeit"));
        Forfeit->resize(400, 300);
        buttonBox = new QDialogButtonBox(Forfeit);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Forfeit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 100, 301, 91));

        retranslateUi(Forfeit);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Forfeit, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Forfeit);
    } // setupUi

    void retranslateUi(QDialog *Forfeit)
    {
        Forfeit->setWindowTitle(QCoreApplication::translate("Forfeit", "Forfeit", nullptr));
        label->setText(QCoreApplication::translate("Forfeit", "<html><head/><body><p><span style=\" font-size:16pt;\">Are You Sure Want to </span><span style=\" font-size:16pt; font-weight:600; color:#ff0000;\">Forfeit</span><span style=\" font-size:16pt;\">?</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Forfeit: public Ui_Forfeit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORFEIT_H
