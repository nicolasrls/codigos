#include <iostream>

using namespace std;

bool soma_28(int tam, int vetor[]){
    int soma = 0;
    for(int i = 0; i < tam; i++){
        if(vetor[i] == 2){
            soma++;
        }
    }
    if(soma == 4){
        return 1;
        }
    else return 0;
}



int main(){
    
    int a, b[a];

    cout << "Digite o tamanho do vetor e seus elementos" << endl;
    cin >> a ;

    for( int i = 0; i < a ; i++) {
        cin >> b[i];
    }

    if(soma_28(a, b) == 1) cout << "A soma correspondeu a 8!" << endl;
    else cout << "A soma não correspondeu a 8" << endl;

    return 0;
}