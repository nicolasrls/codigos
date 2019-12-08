#include "meuled.h"

MeuLed::MeuLed(int pino)
{
    pin = pino;
    pinMode(pin, OUTPUT);
}

void MeuLed::acende()
{
    digitalWrite(pin, HIGH);
}

void MeuLed::apaga()
{
    digitalWrite(pin, LOW);
}

void MeuLed::pisca(int interv)
{
    digitalWrite(pin, HIGH);
    delay(interv);
    digitalWrite(pin, LOW);
}
