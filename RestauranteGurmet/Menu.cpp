#include "Menu.h"
#include <iostream>

void Menu::mostrarMenus(const string& dia, const string& hora) {
    cout << "Menús disponibles:\n";
    cout << "1. Menú del día (22€) - Siempre disponible.\n";

    if (dia == "Sábado" || dia == "Domingo") {
        cout << "2. Menú de fines de semana (27€) - Disponible solo sábados y domingos.\n";
    }

    if (hora >= "08:00" && hora <= "13:00") {
        cout << "3. Menú desayuno (10€) - Disponible todos los días entre 08:00 y 13:00.\n";
    }

    if (dia == "Viernes" || dia == "Sábado" || dia == "Domingo") {
        cout << "4. Menú especial (30€) - Disponible viernes a domingos.\n";
    }
}

double Menu::obtenerPrecio(const string& tipoMenu, const string& dia, const string& hora) {
    if (tipoMenu == "Menú del día") return 22.0;
    if (tipoMenu == "Menú de fines de semana" && (dia == "Sábado" || dia == "Domingo")) return 27.0;
    if (tipoMenu == "Menú desayuno" && (hora >= "08:00" && hora <= "13:00")) return 10.0;
    if (tipoMenu == "Menú especial" && (dia == "Viernes" || dia == "Sábado" || dia == "Domingo")) return 30.0;
    return 0.0; // No válido
}