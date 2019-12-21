#ifndef MEUESTACIONAMENTO_H
#define MEUESTACIONAMENTO_H
#include "Arduino.h"
#include "meuRFID.h"
#include "meuled.h"
#include "meuServo.h"
#include "usuarios.h"

class MeuEstacionamento{
private:
    int vaga;
    bool estadoVaga;
    String usuario;
public:
    MeuEstacionamento(int numvaga, Usuarios b);
    void iniciaVaga(MeuLed a);
    int getVaga() const;
    void setVaga(int value);
    bool getEstadoVaga() const;
    void setEstadoVaga(bool value);
    void mudaEstado(MeuLed a);
    String getA() const;
    void setA(const Usuarios &value);
    String getUsuario() const;
    void setUsuario(const String &value);
    void printSerial();
};

#endif // MEUESTACIONAMENTO_H

MeuEstacionamento::MeuEstacionamento(int numvaga, Usuarios b)
{
    setVaga(numvaga);
    setUsuario(b.getNome());
}

void MeuEstacionamento::iniciaVaga(MeuLed a)
{
    setEstadoVaga(true);
    a.acendeAnalog();
    a.apagaAnalog2();
}

String MeuEstacionamento::getUsuario() const
{
    return usuario;
}

void MeuEstacionamento::setUsuario(const String &value)
{
    usuario = value;
}

bool MeuEstacionamento::getEstadoVaga() const
{
    return estadoVaga;
}

void MeuEstacionamento::setEstadoVaga(bool value)
{
    estadoVaga = value;
}

void MeuEstacionamento::mudaEstado(MeuLed a)
{
    if(estadoVaga == true){
        setEstadoVaga(false);
        a.apagaAnalog();
        a.acendeAnalog2();
    }else if(estadoVaga == false){
        setEstadoVaga(true);
        a.acendeAnalog();
        a.apagaAnalog2();
    }
}

int MeuEstacionamento::getVaga() const
{
    return vaga;
}

void MeuEstacionamento::setVaga(int value)
{
    vaga = value;
}

void MeuEstacionamento::printSerial()
{
    if(estadoVaga == false){
        Serial.print("O usuario ");
        Serial.print(usuario);
        Serial.print(" da vaga ");
        Serial.print(getVaga());
        Serial.print(" deixou o estacionamento.");
        Serial.print("\n");
    }else if(estadoVaga == true){
        Serial.print("O usuario ");
        Serial.print(usuario);
        Serial.print(" da vaga ");
        Serial.print(getVaga());
        Serial.print(" entrou no estacionamento.");
        Serial.print("\n");
    }

}
