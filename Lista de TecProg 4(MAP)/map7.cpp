#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>


using namespace std;

int main()
{
    map <string,map<int,float>> lista;
    int quantidade;
    string continuar, op, produto;

    float valortot = 0, valormed = 0, preco = 0;


    do{
        cout << "Informe o produto: ";
        getline(cin,produto);

        cout << "Informe a quantidade: ";
        cin >> lista[produto][quantidade];

        cout << "Informe o preço: ";
        cin >> lista[produto][preco];

        cout << "Deseja continuar inserindo produtos? ";
        cin >> continuar;
        cin.ignore();
    }while(continuar == "sim");

    float contadprec;

    for(auto elem: lista){
        valortot = lista[produto][quantidade] * lista[produto][preco];
        contadprec += valortot;
    }
    
    cout << "O valor total " << contadprec << endl ; 
    

    cout << left << setw(15) << "Produto " << left << setw(15) << "Quantidade" << left << setw(15)<< "Preço"<< endl;

    for(auto elem : lista){
        cout << setw(15) << left << elem.first << setw(15) << left << elem.second[quantidade] << setw(15) << left << elem.second[preco] <<endl;
    }

    
    return 0;
}