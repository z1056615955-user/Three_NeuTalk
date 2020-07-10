#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QDialog
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent,QString usrname);
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // MAINWINDOW_H
