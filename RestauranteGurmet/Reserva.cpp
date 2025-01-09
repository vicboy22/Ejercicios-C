#include "Reserva.h"

void Reserva::agregarReserva(const Cliente& cliente) {
    reservas.push_back(cliente);
}

bool Reserva::verificarReserva(const string& nombre) {
    for (const auto& cliente : reservas) {
        if (cliente.getNombre() == nombre) {
            return true;
        }
    }
    return false;
}