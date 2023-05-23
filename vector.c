#include <stdio.h>
int main() {
    int MATERIAS,PERSONAS;
    printf("de cuantas personas quieres sacar su promedio");
    scanf("%i",&PERSONAS);
    printf("cuantas materias tienen ");
    scanf("%i",&MATERIAS);
    float calificaciones[PERSONAS][MATERIAS];
    float promedios[PERSONAS];
    for (int i = 0; i < PERSONAS; i++) {
        printf("Persona %d:\n", i + 1);
        for (int j = 0; j < MATERIAS; j++) {
            printf("cuanto sacaste en la materia %d: ", j + 1);
            scanf("%f", &calificaciones[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < PERSONAS; i++) {
        float sumatoria = 0;
        for (int j = 0; j < MATERIAS; j++) {
            sumatoria += calificaciones[i][j];
        }
        promedios[i] = sumatoria / MATERIAS;
    }
    printf("promedio de cada persona:\n");
    for (int i = 0; i < PERSONAS; i++) {
        printf("Persona %d: %.2f\n", i + 1, promedios[i]);
    }

    return 0;
}
/*en caso de no querer que ingresen personas y materias a un n. especifico solo lo defines #define PERSONAS 5 #define MATERIAS 5
y borras las lineas 3,4,5*/