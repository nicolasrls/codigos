#include <iostream>
#include <map>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    string nome,sobrenome,continuar,op;
    
    map<string,string> ns;

    do{
    cin.ignore();
    cout << "Digite o sobrenome: " << endl;
    getline(cin, sobrenome);
    
    if(ns.find(sobrenome)==ns.end()){
        cout << "insira o nome: ";
        cin >> nome;
        ns[sobrenome]=nome;
    }else{
        cout << "Deseja sobrevescrer?(s para sim)" << endl;
            cin >> op;
            if(op == "s"){
                cout << "insira o nome: ";
                cin >> nome;
                ns[sobrenome]=nome;
        }
    }
    cin.ignore();
    cout << "Deseja continuar? s para sim n para não" << endl;
    cin >> continuar;
}while(continuar == "s");

for(auto elem: ns){
    cout << elem.first << ", " << elem.second << endl;
}

return 0;
}
