#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream arquivo;
    string text;

    arquivo.open("input.txt", ios::app);

    while(getline(arquivo,text))
    {
        setlocale(LC_ALL, "portuguese");
        cout<< text << endl;
    }
    return 0;

}
