#ifndef MEULDR_H
#define MEULDR_H


class MeuLdr
{
private:
    int pino;
    float resistencia;
public:
    MeuLdr(int pin);
    void setResistencia();
    float retornoLdr();
};

#endif // MEULDR_H
