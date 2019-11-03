#ifndef DATA_H
#define DATA_H

#include <QString>

class Data
{
public:
    char tipo;
    int padre;
    int actual;
    QString nombre;
    QString contenido;
    Data(char,int,int,QString);
};

#endif // DATA_H
