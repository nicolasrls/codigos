#ifndef FRUTA_H
#define FRUTA_H
#include <iostream>

using namespace std;

class Fruta{

protected:
    string name;
    string cor;
public:
    void setName(string n);
    void setCor(string c);

    string getCor();
    string getNome();
};


#endif