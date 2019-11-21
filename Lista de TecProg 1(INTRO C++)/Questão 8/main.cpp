#include <iostream>

using namespace std;

float somadefloats(float a, float b) {
    float soma;
    if(a != b) {
        soma = a+b;
    }
    if(a == b) {
        soma = 2*(a+b);
    }
    return soma;
}



int main() {

    float golden = 0,shower = 0;
    cout << "Digite 2 valores" << endl;
    cin >> golden >> shower;
    cout << "Valor da soma: " << somadefloats(golden, shower) << endl;

    return 0;
}
