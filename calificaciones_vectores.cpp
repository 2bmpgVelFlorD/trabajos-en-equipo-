#include <stdio.h>

int main() {
    int calificaciones[5][5];
    float promedios[5];

    for (int i = 0; i < 5; i++) {
        printf("Persona %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("Ingrese la calificacion %d: ", j + 1);
            scanf("%d", &calificaciones[i][j]);
        }
    }
    for (int i = 0; i < 5; i++) {
        int suma = 0;
        for (int j = 0; j < 5; j++) {
            suma += calificaciones[i][j];
        }
        promedios[i] = (float)suma / 5;
    }
    printf("\nPromedios:\n");
    for (int i = 0; i < 5; i++) {
        printf("Persona %d: %.2f\n", i + 1, promedios[i]);
    }

    return 0;
}

