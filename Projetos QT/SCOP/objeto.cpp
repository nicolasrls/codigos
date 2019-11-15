#include "objeto.h"

//QString local = "C:/Users/nicol/Documents/codigos/Projetos QT/SCOP/Arquivo/";
//QString nome = "dados_SCOP.csv";


void Objeto::inserirObjeto(Cadastro a)
{
    objetos.push_back(a);
}


Objeto::Objeto()
{

}

void Objeto::ordenarPorCodigo()
{
    std::sort(objetos.begin(),objetos.end(),[](Cadastro a, Cadastro b){
        return a.getCi()<b.getCi();
    });
}

void Objeto::ordenarPorValor()
{
    std::sort(objetos.begin(),objetos.end(),[](Cadastro a, Cadastro b){
        return a.getValor()>b.getValor();
    });
}

void Objeto::ordenarPorPeso()
{
    std::sort(objetos.begin(),objetos.end(),[](Cadastro a, Cadastro b){
        return a.getPeso()<b.getPeso();
    });
}

void Objeto::salvarnoArquivo(QFile arquivo)
{
    if(!arquivo.open(QFile::WriteOnly|QFile::Text)){
       // QMessageBox::warning(this,"Erro","Erro ao abrir o arquivo.");
    }
    arquivo.flush();
    arquivo.close();
}

int Objeto::size()
{
    return objetos.size();
}

Cadastro Objeto::operator[](int indice)
{
        return objetos[indice];
}
