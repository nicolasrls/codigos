#include <iostream>
#include <map>

using namespace std;

int main(){
    
    map<string, int> contador;

    contador["livros"] = 3;

    map<string, int>::iterator it;

    for (it = contador.begin(); it != contador.end(); it++)
    {
        cout << it->first << " = " << it->second << endl;
    }
}