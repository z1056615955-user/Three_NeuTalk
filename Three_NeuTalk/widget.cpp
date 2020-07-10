#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent,QString usrname) :
    ui(new Ui::Widget)
{

    ui->setupUi(this);
   // this->setFixedSize(925,555);
    //this->setStyleSheet("background-image: url(:/images/Color.png)");
    ui->sendBtn->setShortcut(tr("Alt+S"));

    //connect(ui->msgTxtEdit,SIGNAL(currentCharFormatChanged(QTextCharFormat)),this,SLOT(curFmtChanged(QTextCharFormat)));
}

Widget::~Widget()
{
    delete ui;
}

