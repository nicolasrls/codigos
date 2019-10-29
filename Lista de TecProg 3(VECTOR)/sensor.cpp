#include <iostream>
#include "sensor.h"

using namespace std;

int DadosSensor::getValor(){
return valor;
}
int DadosSensor::getFrequencia(){
return frequencia;
}
void DadosSensor::printDados(){
    cout << "O valor é " << getValor() << " e tem frequência: " << getFrequencia() << endl;
}
DadosSensor::DadosSensor(int v, int frq){
    valor = v;
    frequencia = frq;
}