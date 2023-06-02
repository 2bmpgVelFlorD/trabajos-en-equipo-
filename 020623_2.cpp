#include <stdio.h>
//kevin ricardo

int main() {
    int numero;

    printf("Ingrese un nmero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El número es mayor que cero.\n");
    }

    if (numero < 0) {
        printf("El número es menor que cero.\n");
    }

    if (numero == 0) {
        printf("El número es igual a cero.\n");
    }

    return 0;
}

