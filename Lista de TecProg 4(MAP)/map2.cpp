#include <map>
#include <iostream>

using namespace std;

int main()
{
    map<char, int> contador;
    string palavra;

    cout << "Informe uma palavra: ";
    getline(cin, palavra);

    for (auto letra : palavra)
    {
        if(letra != ' ')contador[letra]++;
    }

    for (auto &elemento : contador)
    {
        cout << elemento.first << " aparece : " << elemento.second << " vezes." << endl;
    }

    return 0;
}
