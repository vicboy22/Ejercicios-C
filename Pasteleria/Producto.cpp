#include "Producto.h"
#include <iostream>

Producto::Producto(string n, double p, int c) : nombre(n), precio(p), cantidad(c) {}

void Producto::mostrarProducto() {
    cout << "Producto: " << nombre << ", Precio: $" << precio << ", Cantidad: " << cantidad << endl;
}