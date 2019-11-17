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

bool Objeto::salvarArquivo(QFile file, Objeto &b)
{
       if(!file.open(QIODevice::WriteOnly))
           return false;
       QTextStream out(&file);
       for (int i=0; i<b.size(); i++)
           out << "Objeto: " << b[i].getObj() << "Código :"<<b[i].getCi() << "Valor: " << b[i].getValor() << "Data: "  << b[i].getData() << "Destino" << b[i].getDestino() << "Estado:" << b[i].getEstado() << "Peso:" << b[i].getPeso() << endl;
       file.flush();
       file.close();
       return true;
}


int Objeto::size()
{
    return objetos.size();
}

Cadastro Objeto::operator[](int indice)
{
        return objetos[indice];
}
