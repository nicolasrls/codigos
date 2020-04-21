#include "janelalogin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JanelaLogin w;
    w.show();
    return a.exec();
}
