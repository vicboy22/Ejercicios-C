#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {
private:
    string nombre;
    string hora;
    string dia;
    string planta;
    bool esVip;

public:
    Cliente(string nombre, string hora, string dia, string planta, bool esVip);

    string getNombre() const;
    string getHora() const;
    string getDia() const;
    string getPlanta() const;
    bool isVip() const;

    void mostrarDatos();
};

#endif