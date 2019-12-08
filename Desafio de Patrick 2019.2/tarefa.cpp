#include <iostream>
#include "tarefa.h"

using namespace std;

bool Tarefa::setDescricao(string d){
    if(d.size() < 4  ){
        descricao = "invalido";
        return 0;
    }
       else{
        descricao = d;
        return 1;
            }
   }

   bool Tarefa::setPrioridade(string p){
       if( (p != "baixa") or (p != "media") or (p != "alta")){
           prioridade = "baixa";
           return 0;
       }else{
           prioridade = p;
           return 1;
       }
   }

   void Tarefa::setStatus(bool b){
       if(b == true){
           status = true;
       }else{
           status = false;
    }
   } 
   string Tarefa::getDescricao(){
       return descricao;
   }

   string Tarefa::getPrioridade(){
       return prioridade;
   }

   string Tarefa::getStatus(){
       if(status = true){
        return "Tarefa Concluida";   
       }else{
        return "Tarefa Incompleta";    
       }
   }

   void Tarefa::obterTarefa(){
       string tempd;
       string tempp;
       bool temps;
       
       cout<<"Digite a descricao da tarefa: "<<endl;
       getchar();
       getline(cin, tempd);

       cout<<"Informe a prioridade da tarefa(baixa, media e alta): "<<endl;
       cin>>tempp;

       cout<<"Informe o Status da tarefa(1 = concluida, 0 = em andamento):"<<endl;
       cin>>temps;

       setDescricao(tempd);
       setPrioridade(tempp);
       setStatus(temps);
   }