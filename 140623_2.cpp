#include <stdio.h>

int esPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    int centinela = 1;
    while (centinela) {
        int repeticiones;
        printf("Ingrese el número de repeticiones (0 para salir): ");
        scanf("%d", &repeticiones);
        if (repeticiones == 0) {
            break;
        }
        for (int i = 0; i < repeticiones; i++) {
            if (esPrimo(numero)) {
                printf("%d es un número primo.\n", numero);
            } else {
                printf("%d no es un número primo.\n", numero);
            }
        }
    }
    return 0;
}
