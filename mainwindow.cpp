#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFont tfont = ui->title->font();
    tfont.setPointSize(18);
    ui->title->setFont(tfont);
}

MainWindow::~MainWindow()
{
    delete ui;
}

