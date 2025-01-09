#include <stdio.h>

int main() {
    int n;
    
    printf("¿Cuánt números deseas ingresar? ");
    scanf("%d", &n);
    
    int arr[n];
    int freq[100] = {0};  // Suponemos que los números no superan 100.
    
    printf("Ingresa %d números:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    
    printf("Frecuencia de números:\n");
    for (int i = 0; i < 100; i++) {
        if (freq[i] > 0) {
            printf("%d aparece %d veces\n", i, freq[i]);
        }
    }
    
    return 0;
}