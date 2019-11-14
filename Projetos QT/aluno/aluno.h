#ifndef ALUNO_H
#define ALUNO_H

#include <QString>

class Aluno
{
public:
    Aluno();
    QString calcularStatus();
    QString getNome() const;
    void setNome(const QString &value);

    QString getMatricula() const;
    void setMatricula(const QString &value);

    double getMedia() const;
    void setMedia(double value);

private:
    QString nome;
    QString matricula;
    double media;

};

#endif // ALUNO_H
