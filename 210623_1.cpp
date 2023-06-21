#include <stdio.h>
int main() {
    int numeros[10];
    int i;
    int suma = 0;
    int maximo;
    printf("Ingrese 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    printf("Los elementos ingresados son: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++) {
        suma += numeros[i];
    }
    printf("La suma de los elementos es: %d\n", suma);
    maximo = numeros[0];
    for (i = 1; i < 10; i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
    }
    printf("El mayor elemento es: %d\n", maximo);
    return 0;
}
