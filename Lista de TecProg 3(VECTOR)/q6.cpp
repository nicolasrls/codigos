#include <iostream>
#include "sensor.h"

using namespace std;

int main()
{

    int val = 0, freq = 0;

    cout << "Informe o valor e em seguida a frequencia: ";
    cin >> val >> freq;

    DadosSensor dados(val, freq);
    dados.printDados();

    return 0;
}