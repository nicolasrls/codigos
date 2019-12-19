#ifndef MEUSERVO_H
#define MEUSERVO_H
#include "Arduino.h"
#include "Servo.h"

#define POSINI 69

byte anguloCancelaFechada = 69; //VALOR DO ÂNGULO PARA CANCELA FECHADA
byte anguloCancelaAberta = 159; //VALOR DO ÂNGULO PARA CANCELA ABERTA
int pos;

class meuServo : public Servo{
private:
    Servo s;
public:
    meuServo(int pin);
    void iniciarCancela();
    void abrirCancela();
    void fecharCancela();
};

meuServo::meuServo(int pin)
{
    s.attach(pin);
}

void meuServo::iniciarCancela()
{
    s.write(POSINI);
}

void meuServo::abrirCancela()
{
    for(pos = anguloCancelaFechada; pos < anguloCancelaAberta; pos++){
      s.write(pos);
      delay(12);
    }
}

void meuServo::fecharCancela()
{
    for(pos = anguloCancelaAberta; pos >= anguloCancelaFechada; pos--){
      s.write(pos);
      delay(12);
    }
}







#endif // MEUSERVO_H
