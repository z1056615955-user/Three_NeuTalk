/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QLabel *label_2;
    QLabel *sStatusLbl;
    QPushButton *sSendBtn;
    QPushButton *sOpenBtn;
    QPushButton *sCloseBtn;
    QProgressBar *progressBar;

    void setupUi(QDialog *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName(QString::fromUtf8("Server"));
        Server->resize(456, 224);
        label_2 = new QLabel(Server);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 20, 161, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\351\273\221\344\275\223\";"));
        sStatusLbl = new QLabel(Server);
        sStatusLbl->setObjectName(QString::fromUtf8("sStatusLbl"));
        sStatusLbl->setGeometry(QRect(20, 110, 301, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(10);
        sStatusLbl->setFont(font1);
        sSendBtn = new QPushButton(Server);
        sSendBtn->setObjectName(QString::fromUtf8("sSendBtn"));
        sSendBtn->setGeometry(QRect(20, 70, 101, 31));
        sSendBtn->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        sOpenBtn = new QPushButton(Server);
        sOpenBtn->setObjectName(QString::fromUtf8("sOpenBtn"));
        sOpenBtn->setGeometry(QRect(230, 20, 101, 31));
        sOpenBtn->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        sCloseBtn = new QPushButton(Server);
        sCloseBtn->setObjectName(QString::fromUtf8("sCloseBtn"));
        sCloseBtn->setGeometry(QRect(320, 170, 101, 31));
        sCloseBtn->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        progressBar = new QProgressBar(Server);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(140, 70, 321, 31));
        progressBar->setValue(0);

        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QDialog *Server)
    {
        Server->setWindowTitle(QCoreApplication::translate("Server", "\345\217\221\351\200\201", nullptr));
        label_2->setText(QCoreApplication::translate("Server", "\351\200\211\346\213\251\346\226\207\344\273\266/\346\226\207\344\273\266\345\244\271", nullptr));
        sStatusLbl->setText(QCoreApplication::translate("Server", "\350\257\267\351\200\211\346\213\251\350\246\201\345\217\221\351\200\201\347\232\204\346\226\207\344\273\266\357\274\201", nullptr));
        sSendBtn->setText(QCoreApplication::translate("Server", "\345\217\221\351\200\201", nullptr));
        sOpenBtn->setText(QCoreApplication::translate("Server", "\346\211\223\345\274\200...", nullptr));
        sCloseBtn->setText(QCoreApplication::translate("Server", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
