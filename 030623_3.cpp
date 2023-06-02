#include <stdio.h>

int main() {
    int dividendo, divisor;
    int cociente, residuo;
    printf("Ingrese el dividendo: ");
    scanf("%d", &dividendo);
    
    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);
    
    if (divisor != 0) {
        cociente = dividendo / divisor;
        residuo = dividendo % divisor;
        
        printf("Cociente: %d\n", cociente);
        printf("Dividendo: %d\n", dividendo);
        printf("Divisor: %d\n", divisor);
        printf("Residuo: %d\n", residuo);
    }
    else {
        printf("Error: el divisor debe ser distinto de cero.\n");
    }
    
    return 0;
}

