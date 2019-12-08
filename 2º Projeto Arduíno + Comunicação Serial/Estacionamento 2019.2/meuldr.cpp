#include "meuldr.h"



MeuLdr::MeuLdr(int pin)
{
    pino = pin;
    pinMode(pino, INPUT);
}

void MeuLdr::setResistencia()
{
    resistencia = map(analogRead(pino),0,492,10000,0);
}

float MeuLdr::retornoLdr()
{
    return resistencia;
}
