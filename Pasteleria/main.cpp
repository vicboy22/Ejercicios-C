#include <iostream>
#include "Producto.h"
#include "Pasteleria.h"

int main() {
    Pasteleria pasteleria;
    pasteleria.agregarProducto(Producto("Tarta de manzana", 12.5, 20));
    pasteleria.agregarProducto(Producto("Pastel de chocolate", 15.0, 15));

    cout << "Inventario de Pastelería:" << endl;
    pasteleria.mostrarInventario();

    cout << "\nVendiendo pasteles..." << endl;
    pasteleria.venderProducto("Tarta de manzana", 5);

    cout << "\nInventario después de la venta:" << endl;
    pasteleria.mostrarInventario();

    return 0;
}