#ifndef MEUSERVO_H
#define MEUSERVO_H
#include "Servo.h"


class meuServo : public Servo{
private:

public:
    int pino;
    Servo s;
    meuServo(int pin);
    void iniciarCancela();
    void abrirCancela();
    void fecharCancela();
};

meuServo::meuServo(int pin)
{
    pino = pin;
}

void meuServo::iniciarCancela()
{
    s.attach(pino);
    s.write(69);
}

void meuServo::abrirCancela()
{
    int pos;
    byte anguloCancelaFechada = 69;
    byte anguloCancelaAberta = 159;
    for(pos = anguloCancelaFechada; pos < anguloCancelaAberta; pos++){
      s.write(pos);
      delay(12);
    }
}

void meuServo::fecharCancela()
{
    int pos;
    byte anguloCancelaFechada = 69;
    byte anguloCancelaAberta = 159;
    for(pos = anguloCancelaAberta; pos >= anguloCancelaFechada; pos--){
      s.write(pos);
      delay(12);
    }
}







#endif // MEUSERVO_H
