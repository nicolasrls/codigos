#include "aluno.h"

QString Aluno::getNome() const
{
    return nome;
}

void Aluno::setNome(const QString &value)
{
    if(value.size()>3)
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

QString Aluno::getCurso() const
{
    return curso;
}

void Aluno::setCurso(const QString &value)
{
    curso = value;
}

double Aluno::getMedia() const
{
    return media;
}

void Aluno::setMedia(double value)
{
    media = value;
}

QString Aluno::definirStatus()
{
    if(media>80){
        return "Aprovado";
    }else{
        return "Reprovado";
    }
}

Aluno::Aluno()
{

}
