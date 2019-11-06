#include <iostream>
#include "maca.h"
#include "banana.h"

using namespace std;

int main(){

    Maca a("Maca","vermelha");
    Banana b("Banana","amarela");

    cout << "A " << a.getNome() << " é " << a.getCor() << endl;
    cout << "A " << b.getNome() << " é " << b.getCor() << endl;

    return 0;
}