#include "fruta.h"

using namespace std;

void Fruta::setName(string n){
    name = n;
}
void Fruta::setCor(string c){
    cor = c;
}
string Fruta::getCor(){
    return cor;
}
string Fruta::getNome(){
    return name;
}