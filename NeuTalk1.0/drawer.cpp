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
        toolBtn1->setText("   "+tr("赵文奇             "));//设置名字
        toolBtn1->setIcon(QPixmap(":/images/User1.PNG"));//设置按钮的图标
        toolBtn1->setIconSize(QPixmap(":/images/User1.PNG").size());//按钮大小与图标大小相同
        toolBtn1->setAutoRaise(true);//自动浮起
        toolBtn1->setStyleSheet("color:white;font:14pt");
        toolBtn1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
      //  if(username=="zhaowenqi")
       // {
           // is=true;
           // usersnumber=tr(":/images/User1.PNG");
            connect(toolBtn1,SIGNAL(clicked()),this,SLOT(showChatWidget1()));
       // }


    toolBtn2=new QToolButton;
    toolBtn2->setText("   "+tr("杨思雨                 "));
    toolBtn2->resize(toolBtn1->size());
    toolBtn2->setIcon(QPixmap(":/images/User2.PNG"));
    toolBtn2->setIconSize(QPixmap(":/images/User2.PNG").size());
    toolBtn2->setAutoRaise(true);//自动浮起
     toolBtn2->setStyleSheet("color:white;font:14pt");
    toolBtn2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
   // if(username=="yangsiyu")
    //{
        //is=true;
        //usersnumber=tr(":/images/User2.PNG");
        connect(toolBtn2,SIGNAL(clicked()),this,SLOT(showChatWidget2()));
   // }

    toolBtn3=new QToolButton;
      toolBtn3->resize(toolBtn1->size());
    toolBtn3->setText("    "+tr("潘思文                  "));
    toolBtn3->setIcon(QPixmap(":/images/User3.PNG"));
    toolBtn3->setIconSize(QPixmap(":/images/User3.PNG").size());
    toolBtn3->setAutoRaise(true);//自动浮起
     toolBtn3->setStyleSheet("color:white;font:14pt");
    toolBtn3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    //if(username=="pansiwen")
    //{
       // is=true;
       // usersnumber=tr(":/images/User3.PNG");
        connect(toolBtn3,SIGNAL(clicked()),this,SLOT(showChatWidget3()));
    //}

    toolBtn4=new QToolButton;
      toolBtn4->resize(toolBtn1->size());
    toolBtn4->setText("   "+tr("潘广强                  "));
    toolBtn4->setIcon(QPixmap(":/images/User4.png"));
    toolBtn4->setIconSize(QPixmap(":/images/User4.png").size());
    toolBtn4->setAutoRaise(true);//自动浮起
    toolBtn4->setStyleSheet("color:white;font:14pt");
    toolBtn4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    //if(username=="panguangqiang")
    //{
       // is=true;
       // usersnumber=tr(":/images/User4.png");
        connect(toolBtn4,SIGNAL(clicked()),this,SLOT(showChatWidget4()));
   // }

    toolBtn5=new QToolButton;
      toolBtn5->resize(toolBtn1->size());
    toolBtn5->setText("   "+tr("林雨薇                    "));
    toolBtn5->setIcon(QPixmap(":/images/User5.png"));
    toolBtn5->setIconSize(QPixmap(":/images/User5.png").size());
    toolBtn5->setAutoRaise(true);//自动浮起
     toolBtn5->setStyleSheet("color:white;font:14pt");
    toolBtn5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    //if(username=="linyuwei")
   // {
       // is=true;
        //usersnumber=tr(":/images/User5.png");
        connect(toolBtn5,SIGNAL(clicked()),this,SLOT(showChatWidget5()));
    //}

    toolBtn6=new QToolButton;
      toolBtn6->resize(toolBtn1->size());
    toolBtn6->setText("   "+tr("杨雨霖                 "));
    toolBtn6->setIcon(QPixmap(":/images/User6.png"));
    toolBtn6->setIconSize(QPixmap(":/images/User6.png").size());
    toolBtn6->setAutoRaise(true);//自动浮起
     toolBtn6->setStyleSheet("color:white;font:14pt");
    toolBtn6->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    //if(username=="yangyulin")
    //{
        //is=true;
        //usersnumber=tr(":/images/User6.png");
        connect(toolBtn6,SIGNAL(clicked()),this,SLOT(showChatWidget6()));
   // }


    /*if(username=="Tan")
    {
        is=true;
        usersnumber=tr(":/images/User9.PNG");
        connect(toolBtn9,SIGNAL(clicked()),this,SLOT(showChatWidget9()));
    }*/
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


    pLabel1->setText("欢迎！");
    pLabel1->setStyleSheet("background-color:#e3f9fd;font:14pt;font-family:STXihei");
    pLabel2->setText("用户: "+username);
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


    /*if(!is){
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

    }*/


    layout->addStretch();//插入一个占位符

    this->addItem((QWidget*)groupBox,tr("Neusoft's Chat"));


}

//鼠标点击事件
void Drawer::mousePressEvent(QMouseEvent *event)
{
    //读取坐鼠标点击坐标点
     m_point = event->globalPos();
}

//鼠标移动事件
void Drawer::mouseMoveEvent(QMouseEvent *event)
{
    //把移动的点记录下来
    int dx = event->globalX() - m_point.x();
    int dy = event->globalY() - m_point.y();

    m_point = event->globalPos(); //更新记录点

    move(x() + dx, y() + dy); //窗口移动到此处
}

void Drawer::mouseReleaseEvent(QMouseEvent *event)
{
    //记录移动到的坐标
    int dx = event->globalX() - m_point.x();
    int dy = event->globalY() - m_point.y();

    move(x() + dx, y() + dy);
}

void Drawer::showChatWidget1(){
    chatWidget1=new Widget(0,toolBtn1->text());
    chatWidget1->setWindowTitle(toolBtn1->text());
    chatWidget1->setWindowIcon(toolBtn1->icon());
    chatWidget1->show();
}
void Drawer::showChatWidget2(){
    chatWidget2=new Widget(0,toolBtn2->text());
    chatWidget2->setWindowTitle(toolBtn2->text());
    chatWidget2->setWindowIcon(toolBtn2->icon());
    chatWidget2->show();
}
void Drawer::showChatWidget3(){
    chatWidget3=new Widget(0,toolBtn3->text());
    chatWidget3->setWindowTitle(toolBtn3->text());
    chatWidget3->setWindowIcon(toolBtn3->icon());
    chatWidget3->show();
}
void Drawer::showChatWidget4(){
    chatWidget4=new Widget(0,toolBtn4->text());
    chatWidget4->setWindowTitle(toolBtn4->text());
    chatWidget4->setWindowIcon(toolBtn4->icon());
    chatWidget4->show();
}
void Drawer::showChatWidget5(){
    chatWidget5=new Widget(0,toolBtn5->text());
    chatWidget5->setWindowTitle(toolBtn5->text());
    chatWidget5->setWindowIcon(toolBtn5->icon());
    chatWidget5->show();
}
void Drawer::showChatWidget6(){
    chatWidget6=new Widget(0,toolBtn6->text());
    chatWidget6->setWindowTitle(toolBtn6->text());
    chatWidget6->setWindowIcon(toolBtn6->icon());
    chatWidget6->show();
}

void Drawer::slot_closeWindow()
{
    QApplication::exit();
}

