#include <iostream>

using namespace std;

string helloName(string nome) {
    cout << "Hello " << nome << "!" << endl;
}

int main() {
    string nicolau;

    cout << "digite seu nome: " << endl;
    cin >> nicolau;

    cout << helloName(nicolau);
    return 0;
}
