#include "turma.h"

Turma::Turma()
{

}

double Turma::getMaiorNota()
{

    Aluno *a = std::max_element(turma.begin(),turma.end(),compararPorMedia);
    return a->getMedia();

}

double Turma::getMenorNota()
{
    Aluno *a = std::min_element(turma.begin(),turma.end(),compararPorMedia);
    return a->getMedia();
}

double Turma::getMedia()
{
    double media = 0;
    for(auto e : turma){
        media+=e.getMedia();
    }
    return media/turma.size();
}

void Turma::inserirAluno(Aluno a)
{
    turma.push_back(a);
}

void Turma::ordenarPorNome()
{
    std::sort(turma.begin(),turma.end(),[](Aluno a, Aluno b){
        return a.getNome()<b.getNome();
    });
}

int Turma::size()
{
    return turma.size();
}

Aluno Turma::operator[](int indice)
{
    return turma[indice];
}

bool compararPorMedia(Aluno a, Aluno b)
{
    return a.getMedia()<b.getMedia();
}
