#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ifstream arquivo;
    int valor;
    vector<int> valores;

    arquivo.open("numeros.txt", ios::in);

    while (arquivo >> valor)
    {
        valores.push_back(valor);
    }

    sort(valores.begin(), valores.end());

    cout << "Menor valor: " << valores[0] << endl;
    cout << "Maior valor: " << valores[valores.size() - 1] << endl;

    return 0;
}