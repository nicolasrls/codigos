#include <iostream>

using namespace std;

int main()
{

    float a1 = 0, a2 = 0, soma = 0, subtr = 0, mult = 0, div = 0;
    char op = 0 ;

    cout << "Para comecar digite dois numeros e em seguida a operacao que deseja realizar. " << endl;
    cin >> a1 >> a2>> op;

    switch(op){

    case '-':
        subtr = a1-a2;
        cout << a1 << op << a2 << "=" << subtr << endl;
        break;

    case '+' :
        soma = a1+a2;
        cout << a1 << op << a2 << "=" <<   soma << endl;
        break;

    case '*' :
        mult = a1*a2;
        cout << a1 << op << a2 << "="  <<  mult << endl;
        break;

    case '/' :
        div = a1/a2;
        cout << a1 << op << a2 << "=" <<  div << endl;
        break;
    }
    return 0;
}
