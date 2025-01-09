#include "Cliente.h"
#include <iostream>

Cliente::Cliente(string nombre, string hora, string dia, string planta, bool esVip) 
    : nombre(nombre), hora(hora), dia(dia), planta(planta), esVip(esVip) {}

string Cliente::getNombre() const { return nombre; }
string Cliente::getHora() const { return hora; }
string Cliente::getDia() const { return dia; }
string Cliente::getPlanta() const { return planta; }
bool Cliente::isVip() const { return esVip; }

void Cliente::mostrarDatos() {
    cout << "Cliente: " << nombre << "\nHora: " << hora << "\nDía: " << dia
         << "\nPlanta: " << planta << "\nVIP: " << (esVip ? "Sí" : "No") << endl;
}