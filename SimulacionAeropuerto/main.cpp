#include <iostream>
#include "Persona.h"
#include "Vuelo.h"
#include "Aeropuerto.h"

int main() {
    Aeropuerto aeropuerto;
    aeropuerto.agregarVuelo(Vuelo("Madrid", "Barcelona", 101, 150.0));
    aeropuerto.agregarVuelo(Vuelo("Nueva York", "Los Angeles", 102, 300.0));

    Persona p1("Carlos", 30);

    cout << "Vuelos disponibles:" << endl;
    aeropuerto.mostrarVuelos();

    p1.comprarPasaje(aeropuerto.vuelos[0]);
    aeropuerto.realizarPago(aeropuerto.vuelos[0].precio);

    return 0;
}