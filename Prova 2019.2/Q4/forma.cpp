#include "forma.h"

using namespace std;

void Forma::setLargura(float l){
    largura = l;

}
void Forma::setAltura(float a){
    altura = a;

}

float Forma::getAltura(){
    return altura;

}

float Forma::getLargura(){
    return largura;

}

Forma::Forma(float l, float a){
    setLargura(l);
    setAltura(a);
}

// Triangulo::Triangulo(float a,float l){
//     setLargura(l);
//     setAltura(a);
// }

// Quadrado::Quadrado(float a,float l){
//     setLargura(l);
//     setAltura(a);
// }

float Triangulo::area(){
    areaT = (getLargura()*getAltura())/2;
    return areaT;
}
float Quadrado::area2(){
    areaQ = (getLargura()*getAltura());
    return areaQ;
}