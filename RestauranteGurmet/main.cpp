#include "Restaurante.h"
#include <iostream>

int main() {
    Restaurante restaurante;

    // Crear clientes y agregar reservas
    restaurante.agregarReserva(Cliente("Juan Perez", "20:00", "Viernes", "Primera planta", true));
    restaurante.agregarReserva(Cliente("Ana Gomez", "12:00", "Sábado", "Planta baja", false));

    // Atender clientes
    string nombre, dia, hora;
    cout << "Introduce tu nombre: ";
    getline(cin, nombre);
    cout << "Introduce el día (Lunes, Martes, ...): ";
    getline(cin, dia);
    cout << "Introduce la hora (hh:mm): ";
    getline(cin, hora);

    restaurante.atenderCliente(nombre, dia, hora);

    return 0;
}