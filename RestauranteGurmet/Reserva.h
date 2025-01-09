#ifndef RESERVA_H
#define RESERVA_H

#include "Cliente.h"
#include <vector>

class Reserva {
private:
    vector<Cliente> reservas;

public:
    void agregarReserva(const Cliente& cliente);
    bool verificarReserva(const string& nombre);
};

#endif