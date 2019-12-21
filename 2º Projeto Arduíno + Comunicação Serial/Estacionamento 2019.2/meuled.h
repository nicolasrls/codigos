#ifndef MEULED_H
#define MEULED_H
#include "Arduino.h"

class MeuLed
{
private:
    int pin;
public:    
    MeuLed(int pino);
    void acende();
    void apaga();
    void acendeAnalog();
    void apagaAnalog();
    void pisca(int interv);
};

MeuLed::MeuLed(int pino)
{
    pin = pino;
    pinMode(pin, OUTPUT);
}

void MeuLed::acende()
{
    digitalWrite(pin, LOW);
}

void MeuLed::apaga()
{
    digitalWrite(pin, HIGH);
}

void MeuLed::acendeAnalog()
{
    analogWrite(pin,0);
}

void MeuLed::apagaAnalog()
{
    analogWrite(pin,255);
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

#endif // MEULED_H
