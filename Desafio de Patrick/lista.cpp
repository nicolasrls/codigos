#include "lista.h"
#include <algorithm>

using namespace std;

void Lista::adicionarTarefa(Tarefa t){
        t.obterTarefa();
        lista.push_back(t);
}

void Lista::removerTarefa(string d){
    for( int i = 0; i<lista.size(); i++){
        if(lista[i].getDescricao()== d){
        lista.erase(lista.begin()+i);    
    }else{
        cout<<"Tarefa Inexistente"<<endl;
        }
    }
}
void Lista::mudarStatus(string d){
    for( int i = 0; i<lista.size(); i++){
        if(lista[i].getDescricao()== d){
            if(lista[i].getStatus()== "Tarefa Incompleta"){
                lista[i].setStatus(true);
            }else{
                lista[i].setStatus(false);
            } 
             
    }else{
        cout<<"Tarefa Inexistente";
        }
    }
}

void Lista::mostrarTarefas(){
    for(int j=0; j<lista.size(); j++){
        cout << lista[j].getDescricao() << endl;
        cout << lista[j].getPrioridade() << endl;
        cout << lista[j].getStatus()<< endl;
    }
    if(lista.size() == 0){
        system("clear");
        cout<<" A lista está vazia." << endl;
    }
}

void Lista::mostrarTarefasPorDescricao(){
    for(int k=0; k<lista.size(); k++){
        cout << lista[k].getDescricao() << endl;   
    }
    if(lista.size() == 0){
        system("clear");
        cout<<" A lista está vazia." << endl;
    }
}

void Lista::mostrarTarefasPorPrioridade(){
    for(int k=0; k<lista.size(); k++){
        cout << "Prioridade: " << lista[k].getPrioridade()<< endl;   
    }
    if(lista.size() == 0){
        system("clear");
        cout<<" A lista está vazia." << endl;
    }
}

void Lista::mostrarTarefasPorStatus(){
    for(int w=0; w<lista.size(); w++){
        cout << "Status: "<<lista[w].getStatus() << endl;   
    }
    if(lista.size() == 0){
        system("clear");
        cout<<" A lista está vazia." << endl;
    }
}

int Lista::size(){
    return lista.size();
}