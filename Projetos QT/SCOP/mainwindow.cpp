#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastro.h"
#include "objeto.h"
#include <QPixmap>
#include <QTextStream>
#include <QFileDialog>

QString local = "C:/Users/nicol/Documents/codigos/Projetos QT/SCOP/Arquivo/";
QString nome = "dados_SCOP.txt";

QFile file(local+nome);
QTextStream saida(&file);
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
    if((ui->inputCi->text())!= "" and (ui->inputObjeto->text())!="" and (ui->valorobj->text())!="" and (ui->destinoObj->text())!= "" and (ui->pesoobj->text())!=""){
        temp.setCi(ui->inputCi->text());
        temp.setObj(ui->inputObjeto->text());
        temp.setData(ui->edicaodata->text());
        temp.setValor(ui->valorobj->text());
        temp.setEstado(ui->estadoatual->currentText());
        temp.setDestino(ui->destinoObj->text());
        temp.setPeso(ui->pesoobj->text());
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
    QString filtro = "Arquivo de texto (*.txt*)";
    QString AbrirArquivo = QFileDialog::getOpenFileName(this, "Abrir Arquivos","C:/Users/nicol/Documents/codigos/Projetos QT/SCOP/Arquivo",filtro);
    QFile arquivo(AbrirArquivo);
    if(!arquivo.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::critical(this,"ERRO","ERRO : Arquivo não pôde ser lido!");
    }else{
    QTextStream entrada(&arquivo);
    QString texto;
    ui->tabela->clearContents();
    int quantidade_linhas = ui->tabela->rowCount();
    ui->tabela->insertRow(quantidade_linhas);
    for(int i = 0; i < 10;i++){
        texto = entrada.readLine(i);
        ui->tabela->setItem(quantidade_linhas,i, new QTableWidgetItem(texto));
    }
    QMessageBox::information(this,"Arquivo"," O arquivo foi lido, cheque a tabela!");
    }
}

void MainWindow::on_actionSalvar_triggered(){
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"ERRO","ERRO : Arquivo não pôde ser salvo!");
    }
    for (int i=0; i< a.size(); i++){
      saida<< "||Objeto: " << a[i].getObj() << endl;
      saida<< "||Codigo: " << a[i].getCi() << endl;
      saida<< "||Valor: R$" << a[i].getValor() << endl;
      saida<< "||Data: " << a[i].getData() << endl;
      saida<< "||Destino: " << a[i].getDestino() << endl;
      saida<< "||Status: " << a[i].getEstado() << endl;
      saida<< "||Peso: " << a[i].getPeso()<< "kg" << endl;
    }
    file.flush();
    file.close();
    QMessageBox::information(this,"Salvo","Arquivo salvo com sucesso!");

}

void MainWindow::on_actionSair_triggered()
{
   //para fechar o programa.
   QApplication::quit();
}

void MainWindow::on_actionAlterar_triggered()
{

}
