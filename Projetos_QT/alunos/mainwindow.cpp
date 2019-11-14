#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aluno.h"

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



void MainWindow::on_btnCadastrar_clicked()
{
    Aluno aluno;
    aluno.setNome(ui->inputNome->text());
    aluno.setMatricula(ui->inputMatricula->text());
    aluno.setMedia(ui->inputMedia->text().toDouble());
    aluno.setCurso(ui->inputCurso->currentText());

    ui->inputNome->clear();
    ui->inputMedia->clear();
    ui->inputMatricula->clear();

    int qntd_linhas = ui->tabela->rowCount(); // nao pode ser cadastrado linha vazia
    ui->tabela->insertRow(qntd_linhas);
    ui->tabela->setItem(qntd_linhas,0, new QTableWidgetItem(aluno.getNome()));
    ui->tabela->setItem(qntd_linhas,1, new QTableWidgetItem(aluno.getMatricula()));
    ui->tabela->setItem(qntd_linhas,3, new QTableWidgetItem(QString::number(aluno.getMedia())));
    ui->tabela->setItem(qntd_linhas,2, new QTableWidgetItem(aluno.getCurso()));
    ui->tabela->setItem(qntd_linhas,4, new QTableWidgetItem(aluno.definirStatus()));


}


