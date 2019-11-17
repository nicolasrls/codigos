#ifndef OBJETO_H
#define OBJETO_H
#include "cadastro.h"
#include <QVector>
#include <algorithm>
#include <QFile>
#include <QMessageBox>


class Objeto
{

private:
    QVector <Cadastro> objetos;

public:
    Objeto();
    void inserirObjeto(Cadastro a);
    void ordenarPorCodigo();
    void ordenarPorValor();
    void ordenarPorPeso();
    bool salvarArquivo(QFile file, Objeto &b);
    bool carregarArquivo(QString &arquivo, Objeto &b);
    int size();
    Cadastro operator[](int indice);
};

#endif // OBJETO_H
