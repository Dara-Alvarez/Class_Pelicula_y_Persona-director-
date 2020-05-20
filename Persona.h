//
// Created by Dara on 20/05/2020.
//

#ifndef U6_T6_CLASS_PERSONA_H
#define U6_T6_CLASS_PERSONA_H


class Persona
{
private:
    char nombre[100];
    char nacionalidad[100];
public:

    Persona();
    Persona(char[100], char[100]);

    void toString();

};


#endif //U6_T6_CLASS_PERSONA_H
