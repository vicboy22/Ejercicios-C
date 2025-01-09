#ifndef VUELO_H
#define VUELO_H

#include <string>
using namespace std;

class Vuelo {
public:
    string destino;
    string origen;
    int numeroVuelo;
    double precio;

    Vuelo(string d, string o, int n, double p);
    void mostrarVuelo();
};

#endif