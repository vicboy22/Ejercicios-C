#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radio;
    cout << "Ingresa el radio del círculo: ";
    cin >> radio;
    
    double area = M_PI * radio * radio;
    cout << "El área del círculo es: " << area << endl;
    
    return 0;
}