#include "fm_novocontato.h"
#include "ui_fm_novocontato.h"

fm_novocontato::fm_novocontato(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_novocontato)
{
    ui->setupUi(this);
}

fm_novocontato::~fm_novocontato()
{
    delete ui;
}

void fm_novocontato::on_btn_novocontato_clicked()
{

}
