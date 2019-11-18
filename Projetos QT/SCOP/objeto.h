#ifndef OBJETO_H
#define OBJETO_H
#include "cadastro.h"
#include <QVector>
#include <algorithm>
#include <QFile>
#include <QFileDialog>
#include <QStringList>
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
    void salvarArquivo(QString arquivo);
    bool carregarArquivo(QString arquivo);
    int size();
    Cadastro operator[](int indice);
    bool jaSalvo(QFile arquivo);
};

#endif // OBJETO_H
