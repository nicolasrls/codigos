#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastro.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_cadastrar_clicked()
{
    Cadastro temp;
    temp.setCi(ui->inputCi->text());
    temp.setObj(ui->inputObjeto->text());
    temp.setData(ui->edicaodata->text());
    temp.setValor(ui->valorobj->text());
    temp.setEstado(ui->estadoatual->currentText());
    temp.setDestino(ui->destinoObj->text());

    qDebug() << temp.getObj() << temp.getData() << temp.getValor();
}


