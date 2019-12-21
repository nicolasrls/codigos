#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QJsonDocument>
#include <QJsonObject>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
    QSerialPort serial;
    bool status_cancela = true;
    bool vaga1_status;
    bool vaga2_status;
    bool vaga3_status;
    bool vaga4_status;
    bool vaga5_status;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnConectar_clicked();
    void dadosRecebidos();
    void on_btnLiberaCancela_clicked();

    void on_btnVaga1_clicked();

    void on_btnVaga2_clicked();

    void on_btnVaga3_clicked();

    void on_btnVaga4_clicked();

    void on_btnVaga5_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
