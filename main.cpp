# include  <iostream>
# include  <cstring>

#include "Pelicula.h"
#include "Persona.h"

using namespace std;

//Controla menu
int opcion=0;


void menu()
{
    cout<<endl;

    cout<<"----------------------------------------"<<endl;
    cout<<"-                M E N U               -"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"-     1.Registrar pelicula             -"<<endl;
    cout<<"-     2.Editar datos de la pelicula    -"<<endl;
    cout<<"-     3.Eliminar pelicula              -"<<endl;
    cout<<"-     4.Consultar director             -"<<endl;
    cout<<"-     5.Informacion                    -"<<endl;
    cout<<"----------------------------------------"<<endl;

    cout<<"Opcion:";
    cin>>opcion;

    cout<<endl;
}

Pelicula registar_pelicula()
{
    //Variables pelicula
    char titulo[100];
    Persona director;
    int annio;
    char genero[100];
    char productora[100];
    double minutos;

    //Variables director
    char nombre[100];
    char nacionalidad[100];

    cout<<"Titulo:"<<endl;
    cin>>titulo;
    cout<<"Annio:"<<endl;
    cin>>annio;
    cout<<"Genero:"<<endl;
    cin>>genero;
    cout<<"Productora:"<<endl;
    cin>>productora;
    cout<<"Minutos"<<endl;
    cin>>minutos;

    cout<<"----------------------------------------"<<endl;
    cout<<"            Datos del director          "<<endl;
    cout<<"----------------------------------------"<<endl;

    cout<<"Nombre:"<<endl;
    cin>>nombre;
    cout<<"Nacionalidad:"<<endl;
    cin>>nacionalidad;


    return Pelicula(titulo,Persona(nombre,nacionalidad),annio,genero,productora,minutos);

}


int main()
{
    //Opciones que controla el arreglo
    int eleccion=0;
    int contador=0;

    bool flag=true;

    Pelicula peliculas[10];

    while(flag)
    {
        menu();

        switch (opcion)
        {
            case 1:
                //Registrar
                cout<<"----------------------------------------"<<endl;
                cout<<"          Registrar pelicula            "<<endl;
                cout<<"----------------------------------------"<<endl;

                peliculas[contador]=registar_pelicula();

                cout<<"----------------------------------------"<<endl;
                cout<<"     Pelicula registrado con exito      "<<endl;
                cout<<"----------------------------------------"<<endl;
                cout<<"Numero de la pelicula: "<<contador<<endl;

                contador++;
                break;


            case 2:
                //Editar datos de la pelicula
                cout<<"----------------------------------------"<<endl;
                cout<<"      Editar datos de la pelicula       "<<endl;
                cout<<"----------------------------------------"<<endl;

                cout<<"Que pelicula desea editar:";
                cin>>eleccion;

                cout<<"----------------------------------------"<<endl;
                peliculas[eleccion].toString();
                cout<<"----------------------------------------"<<endl;

                peliculas[eleccion]=registar_pelicula();

                cout<<"----------------------------------------"<<endl;
                cout<<"       Cambio realizado con exito       "<<endl;
                cout<<"----------------------------------------"<<endl;

                break;


            case 3:
                //Eliminar pelicula
                cout<<"----------------------------------------"<<endl;
                cout<<"             Eliminar libro             "<<endl;
                cout<<"----------------------------------------"<<endl;

                cout<<"Que pelicula desea eliminar: ";
                cin>>eleccion;

                peliculas[eleccion]=Pelicula();

                cout<<"----------------------------------------"<<endl;
                cout<<"      Pelicula eliminada con exito      "<<endl;
                cout<<"----------------------------------------"<<endl;

                break;


            case 4:
                //Consultar datos del director
                cout<<"----------------------------------------"<<endl;
                cout<<"           Consultar director           "<<endl;
                cout<<"----------------------------------------"<<endl;

                cout<<"De que pelicula desea consultar: "<<endl;
                cin>>eleccion;

                peliculas[eleccion].get_director();

                break;


            case 5:
                //Informacion
                cout<<"----------------------------------------"<<endl;
                cout<<"               Informacion              "<<endl;
                cout<<"----------------------------------------"<<endl;

                cout<<"Que pelicula desea consultar: "<<endl;
                cin>>eleccion;

                peliculas[eleccion].toString();

                break;


            default:

                cout<<"Opcion incorrecta"<<endl;

                break;
        }
    }

    return 0;
}
