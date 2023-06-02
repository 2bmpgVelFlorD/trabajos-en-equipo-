#include <stdio.h>

int main() {
    int dividendo, divisor;
    int cociente, residuo;

    printf("Ingrese el dividendo: ");
    scanf("%d", &dividendo);

    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);

    cociente = dividendo / divisor;
    residuo = dividendo % divisor;

    printf("Cociente: %d\n", cociente);
    printf("Dividendo: %d\n", dividendo);
    printf("Divisor: %d\n", divisor);
    printf("Residuo: %d\n", residuo);

    return 0;
}

