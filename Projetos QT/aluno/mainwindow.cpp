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

void MainWindow::on_btn_clicked()
{
    Aluno fulano;
    QString nome = ui->input_nome->text();
    fulano.setNome(nome);
    QString matricula = ui->input_mat->text();
    fulano.setMatricula(matricula);
    QString media = ui->input_media->text();
    fulano.setMedia(media.toDouble());
    ui->status->setText(fulano.calcularStatus());


}
