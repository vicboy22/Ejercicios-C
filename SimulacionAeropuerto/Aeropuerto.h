#ifndef AEROPUERTO_H
#define AEROPUERTO_H

#include "Vuelo.h"
#include <vector>
using namespace std;

class Aeropuerto {
private:
    vector<Vuelo> vuelos;

public:
    void agregarVuelo(const Vuelo& v);
    void mostrarVuelos();
    void realizarPago(double monto);
};

#endif