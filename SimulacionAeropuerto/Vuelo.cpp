#include "Vuelo.h"
#include <iostream>

Vuelo::Vuelo(string d, string o, int n, double p) : destino(d), origen(o), numeroVuelo(n), precio(p) {}

void Vuelo::mostrarVuelo() {
    cout << "Vuelo #" << numeroVuelo << " de " << origen << " a " << destino << ", Precio: $" << precio << endl;
}