#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastro.h"
#include "objeto.h"
#include <QPixmap>


Cadastro temp;
Objeto a;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap logo("C:/Users/nicol/Documents/codigos/Projetos QT/SCOP/scopimg.png");
    ui->labelimg->setPixmap(logo.scaled(151,141,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btncadastrar_clicked()
{

    temp.setCi(ui->inputCi->text());
    temp.setObj(ui->inputObjeto->text());
    temp.setData(ui->edicaodata->text());
    temp.setValor(ui->valorobj->text());
    temp.setEstado(ui->estadoatual->currentText());
    temp.setDestino(ui->destinoObj->text());
    temp.setPeso(ui->pesoobj->text());

    if((ui->inputCi->text())!= "" and (ui->inputObjeto->text())!="" and (ui->valorobj->text())!="" and (ui->destinoObj->text())!= "" and (ui->pesoobj->text())!=""){
        a.inserirObjeto(temp);
        int quantidade_linhas = ui->tabela->rowCount();

        ui->tabela->insertRow(quantidade_linhas);

        inserirNaTabela(temp,quantidade_linhas);
        QMessageBox::information(this,"Cadastro:","Cadastrado com sucesso!");

    }else{
        QMessageBox::critical(this,"Erro","Um dos parâmetros estão vazios, favor preencher e tentar novamente.");
    }

    ui->inputCi->clear();
    ui->inputObjeto->clear();
    ui->destinoObj->clear();
    ui->valorobj->clear();
    ui->pesoobj->clear();

    //ui->actionSalvar_Dados->


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
    ui->tabela->setItem(linha,6, new QTableWidgetItem(a.getPeso()));
}

void MainWindow::on_ordmenorcodigo_clicked()
{
    a.ordenarPorCodigo();
    ui->tabela->clearContents();
    for(int i=0; i<a.size();i++){
        inserirNaTabela(a[i],i);
    }
    QMessageBox::information(this,"Ordenado","Ordenado com sucesso!");
}

void MainWindow::on_ordmaiorvalor_clicked()
{
    a.ordenarPorValor();
    ui->tabela->clearContents();
    for(int i=0; i<a.size();i++){
        inserirNaTabela(a[i],i);
    }
    QMessageBox::information(this,"Ordenado","Ordenado com sucesso!");
}

void MainWindow::on_ordpeso_clicked()
{
    a.ordenarPorPeso();
    ui->tabela->clearContents();
    for(int i=0; i<a.size();i++){
        inserirNaTabela(a[i],i);
    }
    QMessageBox::information(this,"Ordenado","Ordenado com sucesso!");
}

void MainWindow::on_actionAbrir_triggered()
{
    ifstream arquivo;
    arquivo.open()
}

void MainWindow::on_actionSalvar_triggered()
{

}

void MainWindow::on_actionSair_triggered()
{

}
