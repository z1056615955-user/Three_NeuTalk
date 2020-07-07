#include "drawer.h"
#include "register.h"
#include<QGroupBox>
#include<QVBoxLayout>
#include<QString>
#include<QDebug>
#include<QApplication>
#include<QPainter>
Drawer::Drawer(QString username,QWidget *parent,Qt::WindowFlags f) :
    QToolBox(parent,f)
{
    setWindowTitle(tr("Neusoft's Chat"));
    setWindowIcon(QPixmap(":/images/O.png"));


   //去掉窗口边框
         setWindowFlags(Qt::FramelessWindowHint);

        bool is=false;
        QString usersnumber=tr(":/images/User10.PNG");
        toolBtn1=new QToolButton;//新建一个QToolButton对象，对应一个按钮
        toolBtn1->setText("   "+tr("zhaowenqi             "));//设置名字
        toolBtn1->setIcon(QPixmap(":/images/User1.PNG"));//设置按钮的图标
        toolBtn1->setIconSize(QPixmap(":/images/User1.PNG").size());//按钮大小与图标大小相同
        toolBtn1->setAutoRaise(true);//自动浮起
        toolBtn1->setStyleSheet("color:white;font:14pt");
        toolBtn1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        if(username=="zhaowenqi")
        {
            is=true;
            usersnumber=tr(":/images/User1.PNG");
            connect(toolBtn1,SIGNAL(clicked()),this,SLOT(showChatWidget1()));
        }


    toolBtn2=new QToolButton;
    toolBtn2->setText("   "+tr("yangsiyu                 "));
    toolBtn2->resize(toolBtn1->size());
    toolBtn2->setIcon(QPixmap(":/images/User2.PNG"));
    toolBtn2->setIconSize(QPixmap(":/images/User2.PNG").size());
    toolBtn2->setAutoRaise(true);//自动浮起
     toolBtn2->setStyleSheet("color:white;font:14pt");
    toolBtn2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    if(username=="yangsiyu")
    {
        is=true;
        usersnumber=tr(":/images/User2.PNG");
        connect(toolBtn2,SIGNAL(clicked()),this,SLOT(showChatWidget2()));
    }

    toolBtn3=new QToolButton;
      toolBtn3->resize(toolBtn1->size());
    toolBtn3->setText("    "+tr("pansiwen                  "));
    toolBtn3->setIcon(QPixmap(":/images/User3.PNG"));
    toolBtn3->setIconSize(QPixmap(":/images/User3.PNG").size());
    toolBtn3->setAutoRaise(true);//自动浮起
     toolBtn3->setStyleSheet("color:white;font:14pt");
    toolBtn3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    if(username=="pansiwen")
    {
        is=true;
        usersnumber=tr(":/images/User3.PNG");
        connect(toolBtn3,SIGNAL(clicked()),this,SLOT(showChatWidget3()));
    }

    toolBtn4=new QToolButton;
      toolBtn4->resize(toolBtn1->size());
    toolBtn4->setText("   "+tr("panguangqiang                  "));
    toolBtn4->setIcon(QPixmap(":/images/User4.png"));
    toolBtn4->setIconSize(QPixmap(":/images/User4.png").size());
    toolBtn4->setAutoRaise(true);//自动浮起
    toolBtn4->setStyleSheet("color:white;font:14pt");
    toolBtn4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    if(username=="panguangqiang")
    {
        is=true;
        usersnumber=tr(":/images/User4.png");
        connect(toolBtn4,SIGNAL(clicked()),this,SLOT(showChatWidget4()));
    }

    toolBtn5=new QToolButton;
      toolBtn5->resize(toolBtn1->size());
    toolBtn5->setText("   "+tr("linyuwei                    "));
    toolBtn5->setIcon(QPixmap(":/images/User5.png"));
    toolBtn5->setIconSize(QPixmap(":/images/User5.png").size());
    toolBtn5->setAutoRaise(true);//自动浮起
     toolBtn5->setStyleSheet("color:white;font:14pt");
    toolBtn5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    if(username=="linyuwei")
    {
        is=true;
        usersnumber=tr(":/images/User5.png");
        connect(toolBtn5,SIGNAL(clicked()),this,SLOT(showChatWidget5()));
    }

    toolBtn6=new QToolButton;
      toolBtn6->resize(toolBtn1->size());
    toolBtn6->setText("   "+tr("yangyulin                 "));
    toolBtn6->setIcon(QPixmap(":/images/User6.png"));
    toolBtn6->setIconSize(QPixmap(":/images/User6.png").size());
    toolBtn6->setAutoRaise(true);//自动浮起
     toolBtn6->setStyleSheet("color:white;font:14pt");
    toolBtn6->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    if(username=="yangyulin")
    {
        is=true;
        usersnumber=tr(":/images/User6.png");
        connect(toolBtn6,SIGNAL(clicked()),this,SLOT(showChatWidget6()));
    }


    if(username=="Tan")
    {
        is=true;
        usersnumber=tr(":/images/User9.PNG");
        connect(toolBtn9,SIGNAL(clicked()),this,SLOT(showChatWidget9()));
    }
    toolBtn11=new QToolButton;
    toolBtn11->setIcon(QPixmap(":/images/ico/close.png"));
    toolBtn11->setAutoRaise(true);
    connect(toolBtn11,SIGNAL(clicked(bool)),this,SLOT(slot_closeWindow()));
    toolBtn12=new QToolButton;
    toolBtn12->setIcon(QPixmap(":/images/ico/mini.png"));
    toolBtn12->setAutoRaise(true);
    connect(toolBtn12,SIGNAL(clicked(bool)),this,SLOT(showMinimized()));

    QGroupBox *groupBox=new QGroupBox;

    groupBox->setStyleSheet("background-image:url(:/images/top_img0.png);font:11pt;font-family:STXihei");
    QVBoxLayout *layout=new QVBoxLayout(groupBox);
    QHBoxLayout *layout1=new QHBoxLayout(groupBox);
    QVBoxLayout *layout2=new QVBoxLayout(groupBox);
    QHBoxLayout *layout3=new QHBoxLayout(groupBox);
    layout->setMargin(0);
    layout->setAlignment(Qt::AlignLeft);

    QLabel *pLabel=new QLabel();
    QLabel *pLabel1=new QLabel();
    QLabel *pLabel2=new QLabel();
    QLabel *pLabel3=new QLabel();


    pLabel->setFixedSize(70,70);

    QPixmap px=QPixmap(usersnumber);

    pLabel->setPixmap(px);
    pLabel->setScaledContents(true);
    pLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken); //设置外观
    pLabel->setScaledContents(true);
    pLabel->setVisible(true);


    pLabel1->setText("Welcome！");
    pLabel1->setStyleSheet("background-color:#e3f9fd;font:14pt;font-family:STXihei");
    pLabel2->setText("User: "+username);
    pLabel2->setStyleSheet("background-color:#e3f9fd;font:14pt;font-family:STXihei");
    layout3->addWidget(pLabel1);
    layout3->addWidget(toolBtn12);
    layout3->addWidget(toolBtn11);
    layout2->addLayout(layout3);
    layout2->addWidget(pLabel2);

    layout1->addWidget(pLabel);
    layout1->addLayout(layout2);

    pLabel3->setLayout(layout1);
    pLabel3->setStyleSheet("background-color:#e3f9fd;font:13pt;font-family:STXihei");
    pLabel3->setFixedSize(290,90);
    pLabel3->setStyleSheet("color:white;font:19pt");


    layout->addWidget(pLabel3);
    layout->addWidget(toolBtn1);
    layout->addWidget(toolBtn2);
    layout->addWidget(toolBtn3);
    layout->addWidget(toolBtn4);
    layout->addWidget(toolBtn5);
    layout->addWidget(toolBtn6);


    if(!is){
        toolBtn10=new QToolButton;

        toolBtn10->setText("   "+username);
        toolBtn10->setIcon(QPixmap(":/images/User10.PNG"));
        toolBtn10->setIconSize(QPixmap(":/images/User10.PNG").size());
        toolBtn10->setAutoRaise(true);//自动浮起
         toolBtn10->setStyleSheet("color:white;font:14pt");
            toolBtn10->resize(toolBtn1->size());
        toolBtn10->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        connect(toolBtn10,SIGNAL(clicked()),this,SLOT(showChatWidget10()));
        layout->addWidget(toolBtn10);

    }


    layout->addStretch();//插入一个占位符

    this->addItem((QWidget*)groupBox,tr("ZIYE's Chat"));


}
void Drawer::showChatWidget1(){

}
void Drawer::showChatWidget2(){

}
void Drawer::showChatWidget3(){

}
void Drawer::showChatWidget4(){

}
void Drawer::showChatWidget5(){

}
void Drawer::showChatWidget6(){
}

void Drawer::slot_closeWindow()
{
    QApplication::exit();
}

