#include "classe.h"
#include <iostream>

using namespace std;

void Veiculo::setTipo(int tp){
    tipo=tp;
}

int Veiculo::getTipo(){
    return tipo;
}

void Veiculo::setVelmax(int vm){
    velMax = vm;
}

int Veiculo::getVelmax(){
    return velMax;
}

void Veiculo::setArma(bool ar){
    arma = ar;
}

Moto::Moto(){
    vel = 0;
    blind = 0;
    rodas = 2;
    setTipo(1);
    setVelmax(150);
    setArma(false);
}

void Veiculo::imp(){
    cout << "Tipo: " << tipo << endl;
    cout << "Velocidade Máxima: " << velMax << endl;
    cout << "Qtde de rodas: " << rodas << endl;
    cout << "Armamento: " << arma << endl;
    cout << "Blindagem: " << blind << endl;
    
}