#include "data.h"

Data::Data(char tipo, int padre, int actual, QString nombre)
{
    this->tipo = tipo;
    this->nombre = nombre;
    this->padre = padre;
    this->actual = actual;
    this->contenido = "";
}
