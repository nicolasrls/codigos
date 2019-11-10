#include <iostream>
#include <algorithm>
#include <vector>
#include "funcionario.h"

using namespace std;

// bool comp(vector <Funcionario> a, vector<Funcionario> b){
//     for(int i = 0; i < a.size(); i++){
//         return a[i].getSal > b[i].getSal();
//     }
// }

int main(){
    
    string n;
    string op;
    double s;
    vector <Funcionario> func;
    do{
        cout << "Insira o nome do funcionario: ";
        cin >> n;
        cout << "Digite o salário do mesmo: ";
        cin >> s;
        Funcionario a(n,s);
        func.push_back(a);
        cout << "Deseja inserir mais um? ";
        cin >> op;
    }while(op == "sim");

    // sort(func.begin(),func.end(),comp);

    for(int i = 0; i < func.size(); i++){
        cout << "Nome: "<<func[i].getName() << "   " << "Salário: " << func[i].getSal() << endl;
    }


    return 0;
}
