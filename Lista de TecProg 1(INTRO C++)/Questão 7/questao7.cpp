#include <iostream>
#include <locale.h>
 
 
using namespace std;
 
int main () {
 
   int num = 49 ;
   int n_usuario = 0;
   setlocale(LC_ALL, "Portuguese");
   cout << "Adivinhe um numero entre 0 e 100 ou pressione (x) para sair:  " << endl;
   while (cin >> n_usuario) {
       if (n_usuario == 'x') {
       cout << "Saindo do loop" << endl;
       break;
       }
       if (n_usuario >= 50 ) {
       cout << "Passou." << endl;
      
       }
       if (n_usuario <= 48 ) {
       cout << "Avance mais." << endl;
      
       }
       if (n_usuario == 49 ) {
       cout << "Parabens, voce acertou." << endl;
       break;
       }
   }
  
   cout << "Fim de programa" << endl;
    return(0);
}
