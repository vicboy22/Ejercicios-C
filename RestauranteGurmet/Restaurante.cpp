#include "Restaurante.h"
#include <iostream>

void Restaurante::agregarReserva(const Cliente& cliente) {
    reserva.agregarReserva(cliente);
}

void Restaurante::atenderCliente(const string& nombre, const string& dia, const string& hora) {
    if (!reserva.verificarReserva(nombre)) {
        cout << "No se encontró una reserva para " << nombre << ". No puedes entrar." << endl;
        return;
    }

    cout << "Bienvenido al restaurante, " << nombre << ".\n";
    Menu::mostrarMenus(dia, hora);

    string eleccion;
    cout << "\nSeleccione su menú: ";
    getline(cin, eleccion);

    double precio = Menu::obtenerPrecio(eleccion, dia, hora);
    if (precio > 0) {
        cout << "Has seleccionado " << eleccion << ". Precio: " << precio << "€\n";
        double propina;
        cout << "¿Cuánto deseas dejar de propina? ";
        cin >> propina;

        cout << "Total a pagar: " << precio + propina << "€\n";
    } else {
        cout << "Selección de menú inválida.\n";
    }
}