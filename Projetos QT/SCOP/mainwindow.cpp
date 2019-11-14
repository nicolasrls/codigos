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

void MainWindow::on_btncadastrar_clicked()
{
    Cadastro temp;
    temp.setCi(ui->inputCi->text());
    temp.setObj(ui->inputObjeto->text());
    temp.setData(ui->edicaodata->text());
    temp.setValor(ui->valorobj->text());
    temp.setEstado(ui->estadoatual->currentText());
    temp.setDestino(ui->destinoObj->text());

    ui->inputCi->clear();
    ui->inputObjeto->clear();
    ui->destinoObj->clear();
    ui->valorobj->clear();

    int quantidade_linhas = ui->tabela->rowCount();

    ui->tabela->insertRow(quantidade_linhas);

    inserirNaTabela(temp,quantidade_linhas);





    qDebug() << temp.getObj() << temp.getData() << temp.getCi() << temp.getEstado() << temp.getDestino() << temp.getValor();
}



void MainWindow::inserirNaTabela(Cadastro a, int linha)
{
    ui->tabela->setItem(linha,0, new QTableWidgetItem(a.getObj()));
    ui->tabela->setItem(linha,1, new QTableWidgetItem(a.getCi()));
    ui->tabela->setItem(linha,2, new QTableWidgetItem(a.getValor()));
    ui->tabela->setItem(linha,3, new QTableWidgetItem(a.getData()));
    ui->tabela->setItem(linha,4, new QTableWidgetItem(a.getEstado()));
    ui->tabela->setItem(linha,5, new QTableWidgetItem(a.getDestino()));


}
