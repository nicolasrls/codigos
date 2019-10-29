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

    for (int i = 0; i < valores.size(); i++)
    {
        cout << "O número: " << valores[i] << " se repete " << count(valores.begin(), valores.end(), valores[i]) << " vezes." << endl;
    }

    return 0;
}