#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std; 

bool comparar(string a, string b){
    return a>b;
}

int main(){

    string nome;
    string sobrenome;
    map <string,string> nomes;
    vector <string> sn;
    string counter;
    do{
    cout << "insira um nome: " << endl;
    cin >> nome;
    cout << "insira o sobrenome: " << endl;
    cin >> sobrenome;
    sn.push_back(sobrenome);
    sort(sn.begin(),sn.end(),comparar);
    for(int i = 0; i<sn.size();i++)nomes[nome]=sn[i];
    cout << "Continuar? "; cin >> counter;
    }while(counter == "1");

    for(auto& elem : nomes){
        cout << elem.first << " " << elem.second << endl;
    }

    return 0;
}

