#include "Persona.h"
#include <iostream>

Persona::Persona(string n, int e) : nombre(n), edad(e) {}

void Persona::comprarPasaje(Vuelo& vuelo) {
    cout << nombre << " ha comprado un pasaje para el vuelo #" << vuelo.numeroVuelo << " de " << vuelo.origen << " a " << vuelo.destino << endl;
}