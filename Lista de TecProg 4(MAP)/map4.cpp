#include <iostream>
#include <map>
#include <iomanip>


using namespace std;

int main()
{

    string resp, prioridade, local;

    map<string, string> localidade;

    cout << "Informe um local: ";
    cin >>localidade["local"];

    cout << "Informe a prioridade do local: ";
    cin >> localidade["prioridade"];

    cout << "Informe o responsável do local: ";
    cin >> localidade["responsável"];
    
    cout << left << setw(15) << "Local " << left << setw(15) << "Prioridade" << left << setw(15)<< "Responsável"<< endl;

    for(auto elem : localidade){
        cout << setw(15) << left << elem.second ;
    }

    return 0;
}