#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Mas eu sei como evitar isso. :)" << endl;
    return 0;
}
