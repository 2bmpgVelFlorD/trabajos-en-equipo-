#include <stdio.h>

float solicitarCalificacion(int numero) {
    float calificacion;
    printf("Ingrese la calificación %d: ", numero);
    scanf("%f", &calificacion);
    return calificacion;
}

void mostrarCalificaciones(float calificaciones[]) {
    printf("Las calificaciones ingresadas son:\n");
    for (int i = 0; i < 5; i++) {
        printf("Calificación #%d: %.2f\n", i+1, calificaciones[i]);
    }
}

int main() {
    float calificaciones[5];

    for (int i = 0; i < 5; i++) {
        calificaciones[i] = solicitarCalificacion(i+1);
    }
    mostrarCalificaciones(calificaciones);

    return 0;
}

