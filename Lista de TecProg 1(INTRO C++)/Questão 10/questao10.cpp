#include <iostream>
using namespace std;

bool criancasSorrindo(int mariaSorrindo, int joaoSorrindo)
{
    if (joaoSorrindo == mariaSorrindo)
        return 1;
    if (mariaSorrindo != joaoSorrindo)
        return 0;
}

int main()
{
    int estadoa, estadob;

    cout << "Digite o estado das crianças. 1 para sorrindo e 2 para não sorrindo" << endl;
    cin >> estadoa >> estadob;

    if (criancasSorrindo(estadoa, estadob) == 0)
    {
        cout << "No have problems!" << endl;
    }
    else
        cout << "Have problems!" << endl;

    return (0);
}