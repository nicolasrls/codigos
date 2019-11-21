#include <iostream>
using namespace std;

int contadorPares(int tam, int vetor[]){
    int contador = 0 ;
    for(int i=0; i < tam ; i++){
        if((vetor[i] % 2) == 0){
            contador++;
        }
    }
    return contador;
}

int main()
{
    int tamanho, vetor[tamanho];

    cout << "Preencha o tamanho do vetor e seus elementos" << endl;
    cin >> tamanho ;

    for( int i = 0; i < tamanho ; i++) {
        cin >> vetor[i];
    }

    cout << "Existem " << contadorPares(tamanho, vetor) << " números pares. "<< endl;

   
    return (0);
}