#include <stdio.h>

int main() {
    float num1, num2, num3, promedio;
    
    printf("Ingresa tres números: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    promedio = (num1 + num2 + num3) / 3;
    printf("El promedio es: %.2f\n", promedio);
    
    return 0;
}