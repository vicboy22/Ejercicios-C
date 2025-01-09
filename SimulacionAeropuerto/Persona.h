#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include "Vuelo.h"
using namespace std;

class Persona {
public:
    string nombre;
    int edad;

    Persona(string n, int e);
    void comprarPasaje(Vuelo& vuelo);
};

#endif