#include <stdio.h>

int main() {
    int matriz1[2][2], matriz2[2][2], suma[2][2];
    
    printf("Ingresa los elementos de la primera matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    printf("Ingresa los elementos de la segunda matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            suma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    
    printf("La matriz resultante es:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", suma[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}