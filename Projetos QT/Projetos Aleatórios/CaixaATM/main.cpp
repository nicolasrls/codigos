#include <iostream>
#include "atm.h"
#include <locale.h>

using namespace std;

int main(void)
{
    setlocale(LC_ALL, "PT_BR");
    bool op = 1;
    ATM a;
    do
    {
        a.chamarMenu();
        cout << "Deseja utilizar novamente? 1 para sim, 0 para não." << endl;
        cin >> op;
    }while (op == 1 or a.ficar == 0);

    return 0;
}
