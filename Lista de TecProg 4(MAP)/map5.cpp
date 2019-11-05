#include <iostream>
#include <map>
#include <vector>
#include <iomanip>


using namespace std;

int main()
{

    string resp, prioridade, local,continuar;

    vector <map<string,string>> lista;

    map<string,string> temp;

    do{
    cout << "Informe um local: ";
    cin >> temp["LOCAL"];
    cout << "Informe a prioridade: ";
    cin >> temp["PRIORIDADE"];
    cout << "Informe o responsável: ";
    cin >> temp["RESPONSAVEL"];

    lista.push_back(temp);
    cout << "Deseja inserir mais um? ";
    cin >> continuar;

    }while(continuar == "s");

    cout << left << setw(15) << "Local " << left << setw(15) << "Prioridade" << left << setw(15)<< "Responsável"<< endl;

    for(auto elem : lista){
        for(auto percorrer: elem){
            cout << setw(15) << left << percorrer.second;
        }
        cout << endl;
    }

    return 0;
}