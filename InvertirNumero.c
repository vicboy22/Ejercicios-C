#include <stdio.h>

int main() {
    int num, invertido = 0;
    
    printf("Ingresa un número: ");
    scanf("%d", &num);
    
    while (num != 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    
    printf("El número invertido es: %d\n", invertido);
    
    return 0;
}