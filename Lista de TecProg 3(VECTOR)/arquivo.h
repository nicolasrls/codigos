#ifndef ARQUIVO_H
#define ARQUIVO_H
#include <fstream>
#include <iostream>
#include <vector>
#include "sensor.h"

void abreArquivo();
void fechaArquivo();
void lerArquivo();
void ordenarVetor(vector <DadosSensor> a);
void ordenarClasse(vector <DadosSensor> b);
void criarArquivo(string n, vector <DadosSensor> c);
bool ordenacao(DadosSensor a, DadosSensor b);



#endif