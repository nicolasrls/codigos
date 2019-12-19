#include "meuled.h"

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

void MeuLed::pisca(int interv)
{
    digitalWrite(pin, LOW);
    delay(interv);
    digitalWrite(pin, HIGH);
}
