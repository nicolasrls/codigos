#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector <int> valores;
    float media = 0;
    int valor,op;
    string op2;

    do{

    cout << "Digite um valor: " << endl;
    cin >> valor;
    valores.push_back(valor);

    cout << "Escolha 1 para ordenar o vetor, 2 para obter a média, 3 para mediana" << endl;
    cin >> op;

    switch(op){
        case 1:
            sort(valores.begin(),valores.end());
            for(auto elem: valores){
                cout << elem;
            }
            break;
        case 2:
            for(int i = 0; i < valores.size(); i++){
                media += valores[i];
            }
            media = (media/valores.size());
            cout << "A média é: " << media << endl;
    }

    cout << "Deseja continuar? " ;
    cin >> op2;
    }while(op2 == "sim");
    

    return 0;
}