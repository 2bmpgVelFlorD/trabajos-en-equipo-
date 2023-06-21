#include <stdio.h>

void encontrarNumeroMasGrande(int num1, int num2, int *mayor) {
    if (num1 > num2) {
        *mayor = num1;
    } else {
        *mayor = num2;
    }
}

int main() {
    int numero1, numero2, mayor;
    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);
    
    encontrarNumeroMasGrande(numero1, numero2, &mayor);
    
    printf("El número más grande es: %d\n", mayor);
    
    return 0;
}
