#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <vector>
#include "tarefa.h"

using namespace std;

class Lista{
    private:

        vector <Tarefa> lista;

    public:

        void adicionarTarefa(Tarefa t);
        void removerTarefa(string d); 
        void mudarStatus(string d); 
        void mostrarTarefas();
        int size();
 
        void mostrarTarefasPorDescricao();
        void mostrarTarefasPorPrioridade();
        void mostrarTarefasPorStatus();
};
#endif