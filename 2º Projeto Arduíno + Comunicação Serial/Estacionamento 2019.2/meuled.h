#ifndef MEULED_H
#define MEULED_H


class MeuLed
{
private:
    int pin;

public:    
    MeuLed(int pino);
    void acende();
    void apaga();
    void pisca(int interv);
};

#endif // MEULED_H
