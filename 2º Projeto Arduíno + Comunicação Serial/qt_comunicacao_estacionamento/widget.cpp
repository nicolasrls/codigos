#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{    
    ui->setupUi(this);
    for(auto p : QSerialPortInfo::availablePorts()){
        ui->comboBoxport->addItem(p.portName());
    }
    connect(&serial,
            SIGNAL(readyRead()),
            this,
            SLOT(dadosRecebidos()));
}

Widget::~Widget()
{    
    delete ui;
}


void Widget::on_btnConectar_clicked()
{
    serial.setPortName(ui->comboBoxport->currentText());
    serial.setBaudRate(115200);
    if(serial.open(QIODevice::ReadWrite)){
        ui->label_status->setText("Status: Conectado");
    }
}

void Widget::dadosRecebidos()
{
    auto data = serial.readAll();
    auto json = QJsonDocument::fromJson(data).object().toVariantMap();
    if(json.contains("Vaga 1") ){
        vaga1_status = json["Vaga 1"].toBool();
        QString btn_text = vaga1_status ? "Ocupar Vaga" : "Liberar Vaga";
        ui->btnVaga1->setText(btn_text);
    }else if(json.contains("Vaga 2") ){
        vaga2_status = json["Vaga 2"].toBool();
        QString btn_text = vaga2_status ? "Ocupar Vaga" : "Liberar Vaga";
        ui->btnVaga2->setText(btn_text);
    }else if(json.contains("Vaga 3") ){
        vaga3_status = json["Vaga 3"].toBool();
        QString btn_text = vaga3_status ? "Ocupar Vaga" : "Liberar Vaga";
        ui->btnVaga3->setText(btn_text);
    }else if(json.contains("Vaga 4") ){
        vaga4_status = json["Vaga 4"].toBool();
        QString btn_text = vaga4_status ? "Ocupar Vaga" : "Liberar Vaga";
        ui->btnVaga4->setText(btn_text);
    }else if(json.contains("Vaga 5") ){
        vaga5_status = json["Vaga 5"].toBool();
        QString btn_text = vaga5_status ? "Ocupar Vaga" : "Liberar Vaga";
        ui->btnVaga5->setText(btn_text);
    }
    if(vaga1_status == false){
        ui->labelVaga1->setText("Ocupada");
    }else{
        ui->labelVaga1->setText("Livre");
    }
    if(vaga2_status == false){
        ui->labelVaga2->setText("Ocupada");
    }else{
        ui->labelVaga2->setText("Livre");
    }
    if(vaga3_status == false){
        ui->labelVaga3->setText("Ocupada");
    }else{
        ui->labelVaga3->setText("Livre");
    }
    if(vaga4_status == false){
        ui->labelVaga4->setText("Ocupada");
    }else{
        ui->labelVaga4->setText("Livre");
    }
    if(vaga5_status == false){
        ui->labelVaga5->setText("Ocupada");
    }else{
        ui->labelVaga5->setText("Livre");
    }
}

void Widget::on_btnLiberaCancela_clicked()
{
    if(status_cancela){
        serial.write("{\"CNC\":0}");
    }else{
        serial.write("{\"CNC\":1}");
    }
}

void Widget::on_btnVaga1_clicked()
{
    if(vaga1_status == true){
        serial.write("{\"Vaga 1\": 0}");
    }else{
        serial.write("{\"Vaga 1\": 1}");
    }
}

void Widget::on_btnVaga2_clicked()
{
    if(vaga2_status == true){
        serial.write("{\"Vaga 2\": 0}");
    }else{
        serial.write("{\"Vaga 2\": 1}");
    }
}

void Widget::on_btnVaga3_clicked()
{
    if(vaga3_status == true){
        serial.write("{\"Vaga 3\": 0}");
    }else{
        serial.write("{\"Vaga 3\": 1}");
    }
}

void Widget::on_btnVaga4_clicked()
{
    if(vaga4_status == true){
        serial.write("{\"Vaga 4\": 0}");
    }else{
        serial.write("{\"Vaga 4\": 1}");
    }
}

void Widget::on_btnVaga5_clicked()
{
    if(vaga5_status == true){
        serial.write("{\"Vaga 5\": 0}");
    }else{
        serial.write("{\"Vaga 5\": 1}");
    }
}
