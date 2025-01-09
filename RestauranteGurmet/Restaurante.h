#ifndef RESTAURANTE_H
#define RESTAURANTE_H

#include "Reserva.h"
#include "Menu.h"

class Restaurante {
private:
    Reserva reserva;

public:
    void agregarReserva(const Cliente& cliente);
    void atenderCliente(const string& nombre, const string& dia, const string& hora);
};

#endif