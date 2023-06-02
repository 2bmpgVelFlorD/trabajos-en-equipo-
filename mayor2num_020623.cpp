#include <stdio.h>

int main() {
    int numero1, numero2, mayor;

    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        mayor = numero1;
    } else {
        mayor = numero2;
    }

    printf("El mayor número es: %d\n", mayor);

    return 0;
}

