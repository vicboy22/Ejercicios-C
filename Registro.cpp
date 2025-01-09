#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    cout << "Ingresa tu nombre: ";
    getline(cin, nombre);
    cout << "Tu nombre es: " << nombre << endl;
    return 0;
}
