#include "Pasteleria.h"
#include <iostream>

void Pasteleria::agregarProducto(const Producto& p) {
    productos.push_back(p);
}

void Pasteleria::mostrarInventario() {
    for (auto& p : productos) {
        p.mostrarProducto();
    }
}

void Pasteleria::venderProducto(string nombre, int cantidad) {
    for (auto& p : productos) {
        if (p.nombre == nombre && p.cantidad >= cantidad) {
            p.cantidad -= cantidad;
            cout << "Vendidos " << cantidad << " " << nombre << "(s)." << endl;
            return;
        }
    }
    cout << "No se pudo vender el producto." << endl;
}