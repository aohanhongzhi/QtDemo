#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->move(500,200);
    


    QLabel *label = new QLabel(this);
    label->setText("运行成功\nVesion:5.6.2\n客户系统不支持5.10.2");
    label->setGeometry(QRect(100,50,200,100));

    QPushButton *btClose = new QPushButton(this);

    btClose->setGeometry(QRect(50,150,100,25));
    btClose->setText("退出");
    connect(btClose,SIGNAL(clicked()),this,SLOT(close()));


}







MainWindow::~MainWindow()
{
    delete ui;
}
