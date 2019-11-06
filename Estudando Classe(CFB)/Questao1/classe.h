#ifndef CLASSE_H
#define CLASSE_H

class Veiculo{
public:
    int vel;
    int blind;
    int rodas;
    void setTipo(int tp);
    int getTipo();
    void setVelmax(int vm);
    int getVelmax();
    void setArma(bool ar);
    void imp();

private:
    int tipo; // 1 para moto, 2 para carro, 3 caminhão, 4 tanque de guerra
    int velMax;
    bool arma;
};

class Moto:public Veiculo{
public:
    Moto();
};

Moto::Moto(){
    vel = 0;
    blind = 0;
    rodas = 2;
}

#endif