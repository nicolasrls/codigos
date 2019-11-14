#include "aluno.h"

Aluno::Aluno()
{

}

QString Aluno::calcularStatus()
{
    if(media > 80){
        return "Aprovado";
    }else{
        return "Reprovado";
    }

}

QString Aluno::getNome() const
{
    return nome;
}

void Aluno::setNome(const QString &value)
{
    nome = value;
}

QString Aluno::getMatricula() const
{
    return matricula;
}

void Aluno::setMatricula(const QString &value)
{
    matricula = value;
}

double Aluno::getMedia() const
{
    return media;
}

void Aluno::setMedia(double value)
{
    media = value;
}
