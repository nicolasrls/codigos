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
    void salvarnoArquivo(QFile a);
    int size();
    Cadastro operator[](int indice);
};

#endif // OBJETO_H
