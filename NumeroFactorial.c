#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;
    
    printf("Ingresa un número: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    
    printf("El factorial de %d es: %lld\n", num, factorial);
    
    return 0;
}