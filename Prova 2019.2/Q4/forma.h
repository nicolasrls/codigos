#ifndef FORMA_H
#define FORMA_H
#include <iostream>
#include <algorithm>

using namespace std;

class Forma{

    private:
        float altura;
        float largura;
    public:
        void setLargura(float l);
        void setAltura(float a);
        float getLargura();
        float getAltura();
        Forma(float l, float a);
};

class Triangulo:public Forma{
    private:
        float areaT;
    public:
        float area();
};

class Quadrado:public Forma{
    private:
        float areaQ;
    public:
        float area2();
};

#endif