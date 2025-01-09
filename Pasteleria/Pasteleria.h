#ifndef PASTELERIA_H
#define PASTELERIA_H

#include "Producto.h"
#include <vector>
using namespace std;

class Pasteleria {
private:
    vector<Producto> productos;

public:
    void agregarProducto(const Producto& p);
    void mostrarInventario();
    void venderProducto(string nombre, int cantidad);
};

#endif