#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main(){

    ifstream numeros;
    map <string,int> contador;
    string nmrs;

    numeros.open("anotacoes.txt");

    while(numeros >> nmrs){
        contador[nmrs]++;
    }
    
    for(auto elemento : contador){
        cout << elemento.first << " se repete: " << elemento.second << " vezes."<< endl;
    }
    
    numeros.close();
}
