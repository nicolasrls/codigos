#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivo;
	string text_user;
    cout << "Digite seu texto: " << endl;

	cin >> text_user;
	arquivo.open("input.txt", ios::app);

	if (arquivo.is_open()){

		arquivo<< endl << "Mais uma linha\n";

		arquivo << endl << text_user;

		arquivo.close();
	}

}
