#ifndef MEULED_H
#define MEULED_H
#include "Arduino.h"

class MeuLed
{
private:
    int pin;
    int pin2;
public:    
    MeuLed(int pino);
    MeuLed(int vd, int vm);
    void acende();
    void apaga();
    void acende2();
    void apaga2();
    void acendeAnalog();
    void acendeAnalog2();
    void apagaAnalog();
    void apagaAnalog2();
    void pisca(int interv);
    void pisca2(int interv);
};

MeuLed::MeuLed(int pino)
{
    pin = pino;
    pinMode(pin, OUTPUT);
}

MeuLed::MeuLed(int vd, int vm)
{
    pin = vd;
    pinMode(pin, OUTPUT);
    pin2 = vm;
    pinMode(pin2, OUTPUT);
}

void MeuLed::acende()
{
    digitalWrite(pin, LOW);
}

void MeuLed::apaga()
{
    digitalWrite(pin, HIGH);
}

void MeuLed::acende2()
{
    digitalWrite(pin2, LOW);
}

void MeuLed::apaga2()
{
    digitalWrite(pin2, HIGH);
}

void MeuLed::acendeAnalog()
{
    analogWrite(pin,0);
}

void MeuLed::acendeAnalog2()
{
    analogWrite(pin2,0);
}

void MeuLed::apagaAnalog()
{
    analogWrite(pin,255);
}

void MeuLed::apagaAnalog2()
{
    analogWrite(pin2,255);
}

void MeuLed::pisca(int interv)
{
    digitalWrite(pin, HIGH);
    delay(interv);
    digitalWrite(pin, LOW);
    delay(interv);
    digitalWrite(pin, HIGH);
    delay(interv);
    digitalWrite(pin, LOW);
    delay(interv);
    digitalWrite(pin, HIGH);
    delay(interv);
    digitalWrite(pin, LOW);
    delay(interv);
    digitalWrite(pin, HIGH);
    delay(interv);
    digitalWrite(pin, LOW);
    delay(interv);
    digitalWrite(pin, HIGH);
    delay(interv);
    digitalWrite(pin, LOW);
}

void MeuLed::pisca2(int interv)
{
    digitalWrite(pin2, HIGH);
    delay(interv);
    digitalWrite(pin2, LOW);
    delay(interv);
    digitalWrite(pin2, HIGH);
    delay(interv);
    digitalWrite(pin2, LOW);
    delay(interv);
    digitalWrite(pin2, HIGH);
    delay(interv);
    digitalWrite(pin2, LOW);
    delay(interv);
    digitalWrite(pin2, HIGH);
    delay(interv);
    digitalWrite(pin2, LOW);
    delay(interv);
    digitalWrite(pin2, HIGH);
    delay(interv);
    digitalWrite(pin2, LOW);
}


#endif // MEULED_H
