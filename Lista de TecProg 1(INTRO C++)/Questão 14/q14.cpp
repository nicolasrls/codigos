#include <iostream>
using namespace std;

bool ehPalindromo(string texto){
    bool palindromo = true;
    int tamanho = texto.length(); 
    for (int i = tamanho / 2; i > 0; i--)
    {
        if (texto[i] != texto[tamanho - i - 1])
        {
            palindromo = false;
            break;
        }
    }
    return palindromo;
}


int main(void)
{
    string Texto = "";     

    cout << "Digite a palavra : " ;
    cin >> Texto;

    if(ehPalindromo(Texto) == 1)cout << "Eh palíndromo" << endl;
    else cout << "Nao eh palíndromo" << endl;
   
    return 0;     
  
}