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


void MainWindow::on_compressB_clicked()
{
    //qstring que contiene en texto en el input
    QString qtext;
    qtext = ui->input->toPlainText();

    //converts QString to std::string
    std::string text = qtext.toUtf8().constData();

    //gets the compressed triplets
    //std::string codedText = coder.getCoded(text);

    //writes the result of compression to the output box
    //qtext = QString::fromStdString(codedText);
    //ui->output->setPlainText("Mensaje comprimido: \n"+qtext);


}

