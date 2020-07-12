/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QLabel *label;
    QProgressBar *progressBar;
    QLabel *cStatusLbl;
    QPushButton *cCancleBtn;
    QPushButton *cCloseBtn;

    void setupUi(QDialog *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QString::fromUtf8("Client"));
        Client->resize(400, 189);
        label = new QLabel(Client);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 101, 21));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"MingLiU-ExtB\";"));
        progressBar = new QProgressBar(Client);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(70, 50, 331, 21));
        progressBar->setValue(0);
        cStatusLbl = new QLabel(Client);
        cStatusLbl->setObjectName(QString::fromUtf8("cStatusLbl"));
        cStatusLbl->setGeometry(QRect(40, 80, 261, 31));
        cCancleBtn = new QPushButton(Client);
        cCancleBtn->setObjectName(QString::fromUtf8("cCancleBtn"));
        cCancleBtn->setGeometry(QRect(70, 130, 93, 28));
        cCloseBtn = new QPushButton(Client);
        cCloseBtn->setObjectName(QString::fromUtf8("cCloseBtn"));
        cCloseBtn->setGeometry(QRect(250, 130, 93, 28));

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QDialog *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "\346\216\245\346\224\266", nullptr));
        label->setText(QCoreApplication::translate("Client", "\345\267\262\345\256\214\346\210\220", nullptr));
        cStatusLbl->setText(QCoreApplication::translate("Client", "\347\255\211\345\276\205\346\216\245\346\224\266\346\226\207\344\273\266...", nullptr));
        cCancleBtn->setText(QCoreApplication::translate("Client", "Cancel", nullptr));
        cCloseBtn->setText(QCoreApplication::translate("Client", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
