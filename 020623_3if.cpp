#include <stdio.h>
//kevin ricardo

int main() {
    int numero;

    printf("Ingrese un nmero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El n�mero es mayor que cero.\n");
    }

    if (numero < 0) {
        printf("El n�mero es menor que cero.\n");
    }

    if (numero == 0) {
        printf("El n�mero es igual a cero.\n");
    }

    return 0;
}

