#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include "sensor.h"

using namespace std;

int main()
{

    vector<DadosSensor> lista;

    DadosSensor temp(88, 15), temp2(90,05), temp3(107,8);

    lista.push_back(temp);
    lista.push_back(temp2);
    lista.push_back(temp3);

    sort(lista.begin(), lista.end(), comparar);

    for (int i = 0; i < lista.size(); i++){
        cout << "O número: " << lista[i].getValor() << " se repete : " << lista[i].getFrequencia() << " vezes." << endl;
    }

    return 0;
}
