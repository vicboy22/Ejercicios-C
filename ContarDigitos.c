#include <stdio.h>

int main() {
    int num, count = 0;
    
    printf("Ingresa un número: ");
    scanf("%d", &num);
    
    while (num != 0) {
        num /= 10;
        count++;
    }
    
    printf("El número tiene %d dígitos.\n", count);
    
    return 0;
}