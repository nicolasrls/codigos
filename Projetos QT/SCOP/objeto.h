#ifndef OBJETO_H
#define OBJETO_H
#include "cadastro.h"
#include <QVector>
#include <algorithm>

class objeto
{

private:
    QVector <Cadastro> objetos;

public:
    objeto();
    void inserirObjeto(Cadastro a);
};

#endif // OBJETO_H
