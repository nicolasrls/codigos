#ifndef TURMA_H
#define TURMA_H

#include <QVector>
#include <algorithm>
#include "aluno.h"

class Turma
{

private:
    QVector<Aluno> turma;

public:
    Turma();
    double getMaiorNota();
    double getMenorNota();
    double getMedia();
    void inserirAluno(Aluno a);
    void ordenarPorNome();
    int size();
    Aluno operator[](int indice);
};

bool compararPorMedia(Aluno a, Aluno b);

#endif // TURMA_H
