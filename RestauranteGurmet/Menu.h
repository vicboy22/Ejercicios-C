#ifndef MENU_H
#define MENU_H

#include <string>
using namespace std;

class Menu {
public:
    static void mostrarMenus(const string& dia, const string& hora);
    static double obtenerPrecio(const string& tipoMenu, const string& dia, const string& hora);
};

#endif