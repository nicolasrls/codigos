#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include <QMessageBox>
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

    void inserirNaTabela(Cadastro a, int linha);
    void on_btncadastrar_clicked();
    void on_ordmenorcodigo_clicked();
    void on_ordmaiorvalor_clicked();
    void on_ordpeso_clicked();

    void on_actionAbrir_triggered();

    void on_actionSalvar_triggered();

    void on_actionSair_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
