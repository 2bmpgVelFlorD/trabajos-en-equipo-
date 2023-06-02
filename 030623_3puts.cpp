#include <stdio.h>

int main() {
    int dividendo, divisor;
    int cociente, residuo;
    printf("Ingrese el dividendo: ");
    scanf("%i", &dividendo);
    
    printf("Ingrese el divisor: ");
    scanf("%i, &divisor);
    
    if (divisor != 0) {
        cociente = dividendo / divisor;
        residuo = dividendo % divisor;
        
        printf("Cociente: %in", cociente);
        printf("Dividendo: %in", dividendo);
        printf("Divisor: %in", divisor);
        printf("Residuo: %in", residuo);
    }
    else {
        printf("Error: el divisor debe ser distinto de cero.\n");
    }
    
    return 0;
}

