#include <iostream>
#include <locale.h>
#include <fstream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
	string frase;
	string frase2;
	ofstream arquivo;

	arquivo.open("input.txt" ,ios::app);

	frase = "Estou adicionando uma linha";
    frase2 = "C++ � mais f�cil que C";

	arquivo << frase <<endl << frase2 << endl;

	if(arquivo.is_open()){
        cout << "Tudo ok";
	}

	return 0;
}
