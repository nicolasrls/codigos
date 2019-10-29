#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vetor;
    int i;
    ofstream arquivo;

    arquivo.open("numeros.txt", ios::app);

    for (i = 0; i < 500; i++)
    {
        vetor.push_back(rand() % 1000);
    }

    for (i = 0; i < vetor.size(); i++)
    {
        arquivo << vetor[i] << endl;
    }
    arquivo.close();
    return 0;
}