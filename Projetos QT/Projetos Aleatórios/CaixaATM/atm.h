#ifndef ATM_H
#define ATM_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <locale.h>

using namespace std;

class ATM
{
private:
    vector<int> notas5;
    vector<int> notas10;
    vector<int> notas20;
    vector<int> notas50;
    vector<int> notas100;
    int saldoAtm;

public:
    bool ficar = 1;
    void chamarMenu();
    void sacarDinheiro();
    void inserirDinheiro();
    void sair();
    ATM();
};

#endif // ATM_H
