#include "atm.h"

using namespace std;
// or notas10.size() == 0 or notas20.size() == 0 or notas50.size() == 0 or notas100.size() == 0

ATM::ATM()
{   
    setlocale(LC_ALL, "PT_BR");
    // notas5.push_back(5);
    // notas10.push_back(10);
    // notas20.push_back(20);
    // notas50.push_back(50);
    // notas100.push_back(100);
    saldoAtm = (notas5.size()*5+notas10.size()*10+notas20.size()*20+notas50.size()*50+notas100.size()*100);
}

void ATM::chamarMenu()
{
    int op;
    cout << "Prezado usuario. Escolha uma das opcoes:" << endl
         << " 1. Sacar Dinheiro" << endl
         << " 2. Carregar o ATM " << endl
         << "  3. Sair " << endl;
    cin >> op;
    switch (op)
    {
    case 1:
        sacarDinheiro();
        cout << endl << "O saldo total do ATM eh de: " << saldoAtm << endl;
        break;
    case 2:
        inserirDinheiro();
        cout << endl << "O saldo total do ATM eh de: " << saldoAtm << endl;
        break;
    case 3:
        sair();
        break;
    default:
        cout << "Opcao invalida. Favor reconsiderar a escolha.";
        break;
    }
}

void ATM::sacarDinheiro()
{
    int quantia;
    cout << "Por gentileza, informe a quantia que deseja sacar: " << endl;
    cin >> quantia;
    cout << "Checando o Saldo";
    Sleep(800);
    cout << ".";
    Sleep(800);
    cout << ".";
    Sleep(800);
    cout << "." << endl;
    if (quantia == 5 and notas5.size() == 0 )
    {        
        cout << "Impossível sacar o valor solicitado devido ao ATM estar sem notas de " << quantia << endl;
    }
    if (quantia == 10 and notas10.size() == 0 )
    {
        cout << "Impossível sacar o valor solicitado devido ao ATM estar sem notas de " << quantia << endl;
    }
    if (quantia == 20 and notas20.size() == 0 )
    {
        cout << "Impossível sacar o valor solicitado devido ao ATM estar sem notas de " << quantia << endl;
    }
    if (quantia == 50 and notas50.size() == 0 )
    {
        cout << "Impossível sacar o valor solicitado devido ao ATM estar sem notas de " << quantia << endl;
    }
    if (quantia == 100 and notas100.size() == 0 )
    {
        cout << "Impossível sacar o valor solicitado devido ao ATM estar sem notas de " << quantia << endl;
    }
    saldoAtm = (notas5.size()*5+notas10.size()*10+notas20.size()*20+notas50.size()*50+notas100.size()*100);
}

void ATM::inserirDinheiro()
{

    int opc;
    cout << "Quais notas deseja abastecer? De 5, 10, 20, 50 ou 100" << endl;
    cin >> opc;
    switch (opc){
    case 5:
        int op5;
        cout << "Quantas notas de 5?";
        cin >> op5;
        for (int i = 0; i < op5; i++)
        {
            notas5.push_back(5);
        }
        cout << "Abastecido! Total de cedulas: " << notas5.size() << endl;
        break;
    case 10:
        int op10;
        cout << "Quantas notas de 10?";
        cin >> op10;
        for (int i = 0; i < op10; i++)
        {
            notas10.push_back(10);
        }
        cout << "Abastecido! Total de cedulas: " << notas10.size() << endl;
        break;
    case 20:
        int op20;
        cout << "Quantas notas de 20?";
        cin >> op20;
        for (int i = 0; i < op20; i++)
        {
            notas20.push_back(20);
        }
        cout << "Abastecido! Total de cedulas: " << notas20.size() << endl;
        break;
    case 50:
        int op50;
        cout << "Quantas notas de 50?";
        cin >> op50;
        for (int i = 0; i < op50; i++)
        {
            notas50.push_back(50);
        }
        cout << "Abastecido! Total de cedulas: " << notas50.size() << endl;
        break;
    case 100:
        int op100;
        cout << "Quantas notas de 100?";
        cin >> op100;
        for (int i = 0; i < op100; i++)
        {
            notas100.push_back(100);
        }
        cout << "Abastecido! Total de cedulas: " << notas100.size() << endl;
        break;
    default:
        cout << "Valor invalido! Favor reconsiderar";
        break;
    }
    saldoAtm = (notas5.size()*5+notas10.size()*10+notas20.size()*20+notas50.size()*50+notas100.size()*100);
}

void ATM::sair(){
    exit(0);
}