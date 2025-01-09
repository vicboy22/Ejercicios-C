#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto {
public:
    string nombre;
    double precio;
    int cantidad;

    Producto(string n, double p, int c);
    void mostrarProducto();
};

#endif