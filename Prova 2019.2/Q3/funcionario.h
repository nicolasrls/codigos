#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;

class Funcionario{
    private:
        string nome;
        double salario;
    public:
        void setName(string n);
        void setSal(double s);
        string getName();
        double getSal();
        Funcionario();
        Funcionario(string n, double s);


};

#endif