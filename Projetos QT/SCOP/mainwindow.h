#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include "cadastro.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btncadastrar_clicked();
    void inserirNaTabela(Cadastro a, int linha);

    void on_ordmenorcodigo_clicked();

    void on_ordmaiorvalor_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
