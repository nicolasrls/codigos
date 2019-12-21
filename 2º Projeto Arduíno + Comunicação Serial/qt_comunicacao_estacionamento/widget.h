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
    bool red_led_status;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnConectar_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
