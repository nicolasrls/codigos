#ifndef DADOSSENSOR_H
#define DADOSSENSOR_H
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

class DadosSensor
{
private:
    int valor;
    int frequencia;

public:
    int getValor();
    int getFrequencia();
    void printDados();
    DadosSensor(int val, int freq);
    DadosSensor();
};

#endif