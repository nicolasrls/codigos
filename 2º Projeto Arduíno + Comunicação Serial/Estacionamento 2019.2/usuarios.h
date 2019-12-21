#ifndef USUARIOS_H
#define USUARIOS_H
#include <Arduino.h>

class Usuarios
{
private:
    String nome;
    String tag;
    bool statusCliente;
public:
    Usuarios(String a, String tag);
    void mudaStatus();
    String getNome() const;
    void setNome(const String &value);
    String getTag() const;
    void setTag(const String &value);
    bool getStatusCliente() const;
    void setStatusCliente(bool value);
};

Usuarios::Usuarios(String a, String b)
{
    nome = a;
    tag = b;
    setStatusCliente(false);
}

String Usuarios::getNome() const
{
    return nome;
}

void Usuarios::setStatusCliente(bool value)
{
    statusCliente = value;
}

bool Usuarios::getStatusCliente() const
{
    return statusCliente;
}

void Usuarios::mudaStatus()
{
    if(statusCliente == false){
        setStatusCliente(true);
    }
    if (statusCliente == true){
        setStatusCliente(false);
    }
}


#endif // USUARIOS_H
