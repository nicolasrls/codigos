#ifndef CLASSE_H
#define CLASSE_H

class Veiculo{
public:
    int vel;
    int blind;
    int rodas;
    void setTipo(int tp);
    void setVelmax(int vm);
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

#endif

