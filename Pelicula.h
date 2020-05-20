//
// Created by Dara on 20/05/2020.
//

#ifndef U6_T6_CLASS_PELICULA_H
#define U6_T6_CLASS_PELICULA_H

#include "Persona.h"

class Pelicula
{
private:
    char titulo[100];
    Persona director;
    int annio;
    char genero[100];
    char productora[100];
    double minutos;
public:
    Pelicula();
    Pelicula(char[100],Persona,int, char[100], char[100], double);

    void toString();
    void get_director();
};


#endif //U6_T6_CLASS_PELICULA_H
