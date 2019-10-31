#include <iostream>
#include <map>
using namespace std;
int main(){
    string name;
    double telefone;
    map<string, double> lista_tel;
    do{
        cout << "Digite um nome ou 'sair' para mostrar a lista ja existente." << endl;
        getline(cin, name);
        if (name == "sair")
        {
            break;
        }
        cout << "Digite o telefone associado: ";
        cin >> telefone;
        cin.ignore();
        if (lista_tel.find(name) != lista_tel.end())
        {
            lista_tel[name] = telefone;
        }

    }while (name != "sair");
    return 0;
    for (auto &n : lista_tel){
        cout << "Nome: " << n.first << " numero : " << n.second << endl;
    }
}