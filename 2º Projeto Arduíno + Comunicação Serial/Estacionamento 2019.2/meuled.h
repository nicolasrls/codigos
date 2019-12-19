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

#endif // MEULED_H
