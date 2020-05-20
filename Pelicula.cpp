//
// Created by Dara on 20/05/2020.
//

# include  <iostream>
# include  <cstring>

#include "Pelicula.h"
#include "Persona.h"

using namespace std;

Pelicula::Pelicula() {

}


Pelicula::Pelicula(char titulo[100], Persona director, int annio, char genero[100], char productora[100], double minutos)
{
    strcpy(this->titulo,titulo);
    this->director=director;
    this->annio=annio;
    strcpy(this->genero,genero);
    strcpy(this->productora,productora);
    this->minutos=minutos;

}

void Pelicula::toString()
{
    cout<<"Titulo: "<< this->titulo<<endl;
    cout<<"Annio: "<< this->annio<<endl;
    cout<<"Genero: "<< this->genero<<endl;
    cout<<"Productora: "<< this->productora<<endl;
    cout<<"Minutos: "<< this->minutos<<endl;
    this->director.toString();

}

void Pelicula::get_director() {

    this->director.toString();
}