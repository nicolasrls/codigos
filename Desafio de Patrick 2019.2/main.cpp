#include <iostream>
#include "tarefa.h"
#include "lista.h"

using namespace std;

int main(){
    int op = 0;
    string op2;
    Tarefa tarefa1;
    Lista lista1;
    string tempd;
    string tempr;


    do{
        cout << "Informe a sua opção: ";
            cout << "1 - Adicionar tarefa\n \
                 2 - Mostrar tarefas\n \
                 3 - Mostrar tarefas por descrição\n \
                 4 - Mostrar tarefas por prioridade\n \
                 5 - Mostrar tarefas por status\n \
                 6 - Alterar status da tarefa\n \
                 7 - Remover tarefa\n \
                 8 - Sair\n";

        cin >> op;
        switch(op){
            case 1:
            lista1.adicionarTarefa(tarefa1);
            break;
            case 2:
            lista1.mostrarTarefas();
            break;
            case 3:
            lista1.mostrarTarefasPorDescricao();
            break;
            case 4:
            lista1.mostrarTarefasPorPrioridade();
            break;
            case 5:
            lista1.mostrarTarefasPorStatus();
            break;
            case 6:
            cout << "Digite a descrição que deseja alterar o status: " ;
            cin >> tempd;
            lista1.mudarStatus(tempd);
            break;
            case 7:
            cout << "Digite a descrição que deseja remover: " ;
            cin >> tempr;
            lista1.removerTarefa(tempr);
            break;
            case 8:
            system("clear");
            cout << "fim de programa." <<endl;
            break;
        }
        cout << "Deseja realizar mais uma operação? ";
        cin >> op2;
        system("clear");
    }
    while(op2 == "sim");
return 0;
}