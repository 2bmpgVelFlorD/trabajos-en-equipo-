#include <stdio.h>

int main() {
    int dividendo, divisor, cociente, residuo;

    printf("Ingrese el dividendo: ");
    scanf("%d", &dividendo);

    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);

    if (divisor != 0) {
        cociente = dividendo / divisor;
        residuo = dividendo % divisor;

        puts("Resultado de la división:");
        puts("Cociente: ");
        printf("%d\n", cociente);
        puts("Dividendo: ");
        printf("%d\n", dividendo);
        puts("Divisor: ");
        printf("%d\n", divisor);
        puts("Residuo: ");
        printf("%d\n", residuo);
    } else {
        puts("Error: el divisor no puede ser cero.");
    }

    return 0;
}


