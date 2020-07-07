#include "login.h"
#include "ui_login.h"
#include "register.h"

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}


void Login::on_btn_regist_clicked() //进入注册界面
{
    Register r;
    r.exec();    //注册页面r，仅仅获取信息.
}
