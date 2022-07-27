/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Result
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *win;
    QLabel *lose;

    void setupUi(QDialog *Result)
    {
        if (Result->objectName().isEmpty())
            Result->setObjectName(QString::fromUtf8("Result"));
        Result->resize(400, 300);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        Result->setFont(font);
        buttonBox = new QDialogButtonBox(Result);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        win = new QLabel(Result);
        win->setObjectName(QString::fromUtf8("win"));
        win->setGeometry(QRect(80, 80, 221, 121));
        lose = new QLabel(Result);
        lose->setObjectName(QString::fromUtf8("lose"));
        lose->setGeometry(QRect(80, 80, 271, 121));

        retranslateUi(Result);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Result, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Result);
    } // setupUi

    void retranslateUi(QDialog *Result)
    {
        Result->setWindowTitle(QCoreApplication::translate("Result", "Game Finished!!!", nullptr));
        win->setText(QCoreApplication::translate("Result", "<html><head/><body><p><span style=\" font-size:36pt;\">You </span><span style=\" font-size:36pt; color:#00a6ff;\">Win</span><span style=\" font-size:36pt;\">!!!</span></p></body></html>", nullptr));
        lose->setText(QCoreApplication::translate("Result", "<html><head/><body><p><span style=\" font-size:36pt;\">You </span><span style=\" font-size:36pt; color:#ff5500;\">Lose</span><span style=\" font-size:36pt;\">!!!</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Result: public Ui_Result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
