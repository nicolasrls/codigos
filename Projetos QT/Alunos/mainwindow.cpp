#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCadastro_clicked()
{
    Aluno aluno;

    aluno.setNome(ui->inputNome->text());

    aluno.setMatricula(ui->inputMat->text());

    aluno.setMedia(ui->inputMedia->text().toDouble());

    aluno.setCurso(ui->inputCurso->currentText());

    ui->inputMat->clear();
    ui->inputMedia->clear();
    ui->inputNome->clear();


   int quantidade_linhas = ui->tabela->rowCount();

   ui->tabela->insertRow(quantidade_linhas);

   inserirNaTabela(aluno,quantidade_linhas);


   turma.inserirAluno(aluno);
   atualizarEstatisticas();


}

void MainWindow::atualizarEstatisticas()
{
    ui->maiorNota->setText(QString::number(turma.getMaiorNota()));
    ui->menorNota->setText(QString::number(turma.getMenorNota()));
    ui->media->setText(QString::number(turma.getMedia()));
}

void MainWindow::inserirNaTabela(Aluno a, int linha)
{
    ui->tabela->setItem(linha,0, new QTableWidgetItem(a.getNome()));
    ui->tabela->setItem(linha,1, new QTableWidgetItem(a.getMatricula()));
    ui->tabela->setItem(linha,2, new QTableWidgetItem(a.getCurso()));
    ui->tabela->setItem(linha,3, new QTableWidgetItem(QString::number(a.getMedia())));
    ui->tabela->setItem(linha,4, new QTableWidgetItem(a.definirStatus()));
}


void MainWindow::on_btn_ordernarNome_clicked()
{
 turma.ordenarPorNome();
 ui->tabela->clearContents();
 for(int i=0; i<turma.size();i++){
     inserirNaTabela(turma[i],i);
 }
}
