#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout << "Tamanho do inteiro = " << sizeof(int) << endl;

    cout << "Tamanho do inteiro = " << sizeof(short) << endl;

    cout << "Tamanho do inteiro = " << sizeof(long) << endl;

    cout << "Tamanho do inteiro = " << sizeof(char) << endl;

    cout << "Tamanho do inteiro = " << sizeof(float) << endl;

    cout << "Tamanho do inteiro = " << sizeof(double) << endl;

    cout << "Tamanho do inteiro = " << sizeof(bool) << endl;

    return 0;
}
