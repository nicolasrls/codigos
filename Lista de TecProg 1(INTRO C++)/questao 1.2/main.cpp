#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Hey, escrever std:: o tempo todo � chato d+" << endl;
    return 0;
}
