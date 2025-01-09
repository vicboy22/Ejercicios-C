#include "Aeropuerto.h"
#include <iostream>

void Aeropuerto::agregarVuelo(const Vuelo& v) {
    vuelos.push_back(v);
}

void Aeropuerto::mostrarVuelos() {
    for (auto& v : vuelos) {
        v.mostrarVuelo();
    }
}

void Aeropuerto::realizarPago(double monto) {
    cout << "Pago realizado por un monto de $" << monto << endl;
}