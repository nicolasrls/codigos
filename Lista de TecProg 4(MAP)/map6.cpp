#include <iostream>
#include <map>
#include <vector>
#include <iomanip>

using namespace std;

int main(){


    string continuar, etemp, etmp2,nome;
    int op;
    map<string,string> lista;
    map<string, string>::iterator it;    
    
    do{

    cout << "Deseja Adicionar(0),remover(1), alterar(2) ou listar os endereços(3) ?";
    cin >> op;
    switch(op){
    case 0:
    cout << "Informe o nome: ";
    cin >> nome;
    cout << "Informe o email: ";
    cin >> lista[nome];
    break;
    case 1:
    cout << "Qual email que deseja remover? Insira o nome do contato: ";
    cin >> etemp;
    it = lista.find(etemp);
    lista.erase(it);
    break;
    case 2:
    cout << "Qual email que deseja alterar? Insira o nome do contato: ";
    cin >>  etemp;
    it = lista.find(etemp);
    for(it=lista.begin(); it!=lista.end(); it++){
        if(it->first == etemp){
            cout << "Digite o novo email." << endl;
            cin >> etmp2;
            it->second = etmp2;
        }
    }    
    break;

    case 3:
    
    cout << left << setw(15) << "Nome " << left << setw(15) << "Email" << endl;

    for(auto elem : lista){
        cout << setw(15) << left << elem.first << setw(15) << left << elem.second ;
        cout << endl;
    }
    break;

    default: 
    cout << "Opção incorreta. Tente novamente.";
    cin >> op;
    break;
    }

    cout << "Deseja continuar (sim ou não)? ";
    cin >> continuar;

    }while(continuar == "sim");

    system("clear");
    cout << "Fim de programa.\n";
   
    return 0;
}
