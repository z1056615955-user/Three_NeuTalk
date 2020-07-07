/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *msgBrowser;
    QTableWidget *usrTblWidget;
    QToolButton *boldTBtn;
    QToolButton *italicTBtn;
    QLabel *usrNumLbl;
    QToolButton *underlineTBtn;
    QFontComboBox *fontCbx;
    QTextEdit *msgTxtEdit;
    QComboBox *sizeCbx;
    QToolButton *sendTBtn;
    QToolButton *clearTBtn;
    QToolButton *colorTBtn;
    QPushButton *sendBtn;
    QPushButton *exitBtn;
    QToolButton *saveTBtn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(928, 595);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(151, 236, 255);"));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        msgBrowser = new QTextBrowser(Widget);
        msgBrowser->setObjectName(QString::fromUtf8("msgBrowser"));
        msgBrowser->setStyleSheet(QString::fromUtf8("background-image: url(:/images/backw.png);"));

        gridLayout->addWidget(msgBrowser, 0, 0, 1, 10);

        usrTblWidget = new QTableWidget(Widget);
        if (usrTblWidget->columnCount() < 2)
            usrTblWidget->setColumnCount(2);
        QFont font;
        font.setPointSize(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        usrTblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        usrTblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        usrTblWidget->setObjectName(QString::fromUtf8("usrTblWidget"));
        usrTblWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/images/backw.png);"));
        usrTblWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        usrTblWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        usrTblWidget->setShowGrid(false);

        gridLayout->addWidget(usrTblWidget, 0, 10, 3, 1);

        boldTBtn = new QToolButton(Widget);
        boldTBtn->setObjectName(QString::fromUtf8("boldTBtn"));
        boldTBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/B.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldTBtn->setIcon(icon);
        boldTBtn->setCheckable(true);
        boldTBtn->setAutoRaise(false);

        gridLayout->addWidget(boldTBtn, 1, 0, 1, 1);

        italicTBtn = new QToolButton(Widget);
        italicTBtn->setObjectName(QString::fromUtf8("italicTBtn"));
        italicTBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/I.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicTBtn->setIcon(icon1);
        italicTBtn->setCheckable(true);

        gridLayout->addWidget(italicTBtn, 1, 1, 1, 1);

        usrNumLbl = new QLabel(Widget);
        usrNumLbl->setObjectName(QString::fromUtf8("usrNumLbl"));

        gridLayout->addWidget(usrNumLbl, 3, 10, 1, 1);

        underlineTBtn = new QToolButton(Widget);
        underlineTBtn->setObjectName(QString::fromUtf8("underlineTBtn"));
        underlineTBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/U.png"), QSize(), QIcon::Normal, QIcon::Off);
        underlineTBtn->setIcon(icon2);
        underlineTBtn->setCheckable(true);

        gridLayout->addWidget(underlineTBtn, 1, 2, 1, 1);

        fontCbx = new QFontComboBox(Widget);
        fontCbx->setObjectName(QString::fromUtf8("fontCbx"));
        fontCbx->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(fontCbx, 1, 4, 1, 1);

        msgTxtEdit = new QTextEdit(Widget);
        msgTxtEdit->setObjectName(QString::fromUtf8("msgTxtEdit"));
        msgTxtEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/images/backw.png);"));

        gridLayout->addWidget(msgTxtEdit, 2, 0, 1, 10);

        sizeCbx = new QComboBox(Widget);
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->setObjectName(QString::fromUtf8("sizeCbx"));
        sizeCbx->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(sizeCbx, 1, 5, 1, 1);

        sendTBtn = new QToolButton(Widget);
        sendTBtn->setObjectName(QString::fromUtf8("sendTBtn"));
        sendTBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/F.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendTBtn->setIcon(icon3);

        gridLayout->addWidget(sendTBtn, 1, 9, 1, 1);

        clearTBtn = new QToolButton(Widget);
        clearTBtn->setObjectName(QString::fromUtf8("clearTBtn"));
        clearTBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/E.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearTBtn->setIcon(icon4);

        gridLayout->addWidget(clearTBtn, 1, 7, 1, 1);

        colorTBtn = new QToolButton(Widget);
        colorTBtn->setObjectName(QString::fromUtf8("colorTBtn"));
        colorTBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/C.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorTBtn->setIcon(icon5);

        gridLayout->addWidget(colorTBtn, 1, 3, 1, 1);

        sendBtn = new QPushButton(Widget);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));
        sendBtn->setStyleSheet(QString::fromUtf8("background-image: url(:/images/backw.png);"));

        gridLayout->addWidget(sendBtn, 3, 6, 1, 1);

        exitBtn = new QPushButton(Widget);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setStyleSheet(QString::fromUtf8("background-image: url(:/images/backw.png);"));

        gridLayout->addWidget(exitBtn, 3, 7, 1, 3);

        saveTBtn = new QToolButton(Widget);
        saveTBtn->setObjectName(QString::fromUtf8("saveTBtn"));
        saveTBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/S.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveTBtn->setIcon(icon6);

        gridLayout->addWidget(saveTBtn, 1, 8, 1, 1);


        retranslateUi(Widget);

        sizeCbx->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        QTableWidgetItem *___qtablewidgetitem = usrTblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = usrTblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Widget", "IP\345\234\260\345\235\200", nullptr));
        boldTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
        italicTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
        usrNumLbl->setText(QCoreApplication::translate("Widget", "\345\234\250\347\272\277\344\272\272\346\225\260\357\274\2320\344\272\272", nullptr));
        underlineTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
        sizeCbx->setItemText(0, QCoreApplication::translate("Widget", "8", nullptr));
        sizeCbx->setItemText(1, QCoreApplication::translate("Widget", "9", nullptr));
        sizeCbx->setItemText(2, QCoreApplication::translate("Widget", "10", nullptr));
        sizeCbx->setItemText(3, QCoreApplication::translate("Widget", "11", nullptr));
        sizeCbx->setItemText(4, QCoreApplication::translate("Widget", "12", nullptr));
        sizeCbx->setItemText(5, QCoreApplication::translate("Widget", "13", nullptr));
        sizeCbx->setItemText(6, QCoreApplication::translate("Widget", "14", nullptr));
        sizeCbx->setItemText(7, QCoreApplication::translate("Widget", "15", nullptr));
        sizeCbx->setItemText(8, QCoreApplication::translate("Widget", "16", nullptr));
        sizeCbx->setItemText(9, QCoreApplication::translate("Widget", "17", nullptr));
        sizeCbx->setItemText(10, QCoreApplication::translate("Widget", "18", nullptr));
        sizeCbx->setItemText(11, QCoreApplication::translate("Widget", "19", nullptr));
        sizeCbx->setItemText(12, QCoreApplication::translate("Widget", "20", nullptr));
        sizeCbx->setItemText(13, QCoreApplication::translate("Widget", "21", nullptr));
        sizeCbx->setItemText(14, QCoreApplication::translate("Widget", "22", nullptr));

        sendTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
        clearTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
        colorTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
        sendBtn->setText(QCoreApplication::translate("Widget", "Send(S)", nullptr));
        exitBtn->setText(QCoreApplication::translate("Widget", "Exit", nullptr));
        saveTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
