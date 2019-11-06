#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector <int> valores;
    float media = 0;
    int valor,op;
    
    do{
    while(cin >> valor){
        valores.push_back(valor);
    }

    cout << "Digite 1 para ver os valores ordenados, 2 para a média dos valores e 3 para obter a mediana dos valores." << endl;
    cin >> op;

    switch (op)
    {
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
        break;

    case 3:
        float mediana;
        sort(valores.begin(),valores.end());
        for(int j = 0; j < valores.size();j++){
            if(valores.size()%2 == 1){
                mediana = valores[valores.size()%2];
            }
            if(valores.size()%2 == 0){
                mediana = (valores[(valores.size()%2)-1]+valores[(valores.size()%2)+1])/2;
            }
        }
        cout << "A mediana é: " << mediana << endl;
        break;
    }
    cout << "Continuar?  ";
    }while(continuar == 's');



    return 0;
}