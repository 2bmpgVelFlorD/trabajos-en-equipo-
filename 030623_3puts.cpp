#include <stdio.h>

int main() {
    int dividendo, divisor;
    int cociente, residuo;
    printf("Ingrese el dividendo: ");
    puts("ingrese el dividendo");
    scanf("%i", &dividendo);
    
    printf("Ingrese el divisor: ");
    puts("ingrese el divisor");
    scanf("%i, &divisor);
    
    if (divisor != 0) {
        cociente = dividendo / divisor;
        residuo = dividendo % divisor;
        
        printf("Cociente: %i\n", cociente);
        puts("cociente %i\n",cociente);
        printf("Dividendo: %i\n", dividendo);
        puts("dividendo %i\n",dividendo);
        printf("Divisor: %i\n", divisor);
        puts("divisor %i\n",divisor);
        printf("Residuo: %i\n", residuo);
        puts("residuo %i\n",residuo);
    }
    else {
        printf("Error: el divisor debe ser distinto de cero.\n");
    }
    
    return 0;
}

