#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include "sensor.h"

using namespace std;

bool comparar(DadosSensor a1, DadosSensor a2)
{
    return a1.getFrequencia() >= a2.getFrequencia();
}

int main()
{
    ifstream arquivo;
    int valor1;
    vector <int> valor;
    vector<DadosSensor> lista;

    arquivo.open("numeros.txt", ios::in);

    while (arquivo >> valor1)
    {
        valor.push_back(valor1);
    }

    sort(lista.begin(), lista.end(), comparar);

    for (int i = 0; i < lista.size(); i++){
        cout << "O número: " << lista[i].getValor() << " se repete : " << lista[i].getFrequencia() << " vezes." << endl;
    }

    return 0;
}