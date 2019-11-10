#include "funcionario.h"

using namespace std;

Funcionario::Funcionario(string n, double s){
    setName(n);
    setSal(s);
}

void Funcionario::setSal(double s){
    salario = s;
}

void Funcionario::setName(string n){
    nome = n;
}

string Funcionario::getName(){
    return nome;
}

double Funcionario::getSal(){
    return salario;
}