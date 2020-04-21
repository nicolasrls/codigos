#include "janelalogin.h"
#include "ui_janelalogin.h"

static QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");


JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);
    bancoDeDados.setDatabaseName("/home/nicolas/Documentos/codigos/Projetos QT/Proj.Com.SQL/database/tb_login.db");
    if(!bancoDeDados.open()){
        ui->label->setText("Não foi possivel abrir o banco de dados.");
    }else{
        ui->label->setText("Banco de dados foi aberto com sucesso!");
    }
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}


void JanelaLogin::on_btn_Entrar_clicked()
{
    QString username = ui->userEdit->text();
    QString password = ui->passEdit->text();
    if(!bancoDeDados.isOpen()){
        qDebug()<<"Nao esta aberto";
        return;
    }
    QSqlQuery query;
    if(query.exec("select * from tb_login where username='"+username+"' and password='"+password+"'")){
        int cont = 0;
        while(query.next()){
            cont++;
        }
        if(cont > 0){
            ui->label->setText("Login Efetuado com sucesso!");
            this->close();
            fm_principal f_principal;
            f_principal.setModal(true);
            f_principal.exec();
        }else{
            ui->label->setText("Login não efetuado");
            ui->userEdit->clear();
            ui->passEdit->clear();
            ui->userEdit->setFocus();
        }
    }
}

