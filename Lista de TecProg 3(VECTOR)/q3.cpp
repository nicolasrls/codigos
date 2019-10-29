#include <iostream>
#include <fstream>
#include <vector>

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

    for (int i = 0; i < valores.size(); i++)
    {
        cout << valores[i] << endl;
    }

    return 0;
}