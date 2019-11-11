#include <iostream>
#include <vector>
#include <algorithm>
#define IGUAIS = "SÃO IGUAIS"

using namespace std;

bool organizar(string a, string b){
    return a.size()<b.size();
}

int main(){

    vector <string> mizera;
    string temp;

    cout << "Insira 3 palavras: ";

    for(int i = 0; i < 3; i++){
        cin >> temp;
        mizera.push_back(temp);
    }

    sort(mizera.begin(),mizera.end(),organizar);

    if((mizera[0].size()==mizera[1].size())or(mizera[1].size()==mizera[2].size())and(mizera[0].size()==mizera[2].size())){
        cout << "As palavras tem mesmo tamanho" << endl;
    }else{
        cout << mizera[2] << ">" << mizera[0] << endl;
    }


    return 0;
}