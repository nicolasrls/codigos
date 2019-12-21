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
