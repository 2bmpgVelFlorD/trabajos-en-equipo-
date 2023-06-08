#include <stdio.h>

int main() {
    int numero;
    int contador = 1;
    
    printf("Ingrese un número para generar su tabla de multiplicar: ");
    scanf("%d", &numero);
    
    printf("Tabla de multiplicar del %d:\n", numero);
    
    do {
        int resultado = numero * contador;
        printf("%d x %d = %d\n", numero, contador, resultado);
        contador++;
    } while (contador <= 10);
    
    return 0;
}
