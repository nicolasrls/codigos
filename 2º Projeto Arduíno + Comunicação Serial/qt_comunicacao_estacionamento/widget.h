#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDateTime>
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
    bool vaga1_status = true;
    bool vaga2_status = true;
    bool vaga3_status = true;
    bool vaga4_status = true;
    bool vaga5_status = true;

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
    void on_actionatualizar_triggered();
private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
