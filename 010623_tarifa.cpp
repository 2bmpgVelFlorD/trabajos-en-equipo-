#include <stdio.h>

int main() {
    int numero;
    float resultado;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero > 1000 && numero > 2500) {
        resultado = numero * 1.9;
    } else if (numero < 1000) {
        resultado = numero * 0.9;
    } else {
        resultado = numero * 3.0;
    }

    printf("El resultado es: %.2f\n", resultado);

    return 0;
}
