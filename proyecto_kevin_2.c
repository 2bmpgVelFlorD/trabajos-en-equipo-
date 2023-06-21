#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct {
    char ndp[200];
    char dir[100];
    float fdn;
    char sdp;
    int edp;
    float pdp;
    float adp;
    float tdp;
} Paciente;

int main() {
    int csm = 0, pcr = 0, csf = 0, pct = 0; // Contadores
    Paciente pacientes[100]; // Arreglo de pacientes
    int numPacientes; // Número de pacientes ingresados
    char sintomas[100];

    int numero, n, c, po; // Variables para control de flujo del programa

    do {
        printf("Nuestro horario de atención es de 7 A.M a 12 P.M\n");
        printf("¿Cuál es la hora? ");
        scanf("%i", &numero);

        if (numero >= 7 && numero <= 24) {
            do {
                do {
                    printf("\n____________");
                    printf("\n|   IMSS   |");
                    printf("\n| ||    || |");
                    printf("\n|   _____  |");
                    printf("\n|___|*|*|__|");
                    printf("\n___________________ ");
                    printf("\ningresa el numero 1\n");
                    scanf("%i", &n);

                    if (n == 1) {
                        printf("bienvenido\n");
                        system("cls");
                    } else {
                        printf("ese no es\n");
                    }
                } while (n != 1);

                printf("\n_____________________________________\n");
                printf("Proporciona los siguientes datos\n");
                Paciente paciente;

                printf("Como se llama: ");
                scanf("%199s", paciente.ndp);
                printf("Dirección (opcional con guiones bajos): ");
                scanf("%99s", paciente.dir);
                printf("Fecha de nacimiento (sin espacios): ");
                scanf("%f", &paciente.fdn);
                printf("Sexo: ");
                scanf(" %c", &paciente.sdp);
                printf("Edad: ");
                scanf("%i", &paciente.edp);
                printf("Peso: ");
                scanf("%f", &paciente.pdp);
                printf("Altura (redondeada): ");
                scanf("%f", &paciente.adp);
                printf("Temperatura: ");
                scanf("%f", &paciente.tdp);
                printf("_____________________________________\n");
                system("cls");

                // Contar el sexo del paciente
                if (tolower(paciente.sdp) == 'm') {
                    csm++;
                } else if (tolower(paciente.sdp) == 'f') {
                    csf++;
                }

                if (paciente.tdp > 37.2) {
                    printf("\n!!ATENCIÓN!!\n");
                    printf("Cuarto 1: Pacientes con fiebre\n");
                    printf("\nMedicamentos:\n");
                    printf("________________________\n");
                    printf("paracetamol cada 4 horas\n");
                    printf("ibuprofeno cada 6 horas\n");
                    printf("________________________\n");
                    pct++;
                    printf("\n¿Desea registrar otro paciente? ");
                    scanf("%i", &c);
                    system("cls");
                } else {
                    printf("\nTome precauciones\n");
                    printf("Describa sus síntomas:\n");
                    scanf("%s", paciente.sintomas);
                    for (int i = 0; i < strlen(paciente.sintomas); i++) {
                        paciente.sintomas[i] = tolower(paciente.sintomas[i]);
                    }
                    // tos // congestion nasal // dolor de garganta // estornudos
                    if (strstr(paciente.sintomas, "t") != NULL || strstr(paciente.sintomas, "cn") != NULL || strstr(paciente.sintomas, "dg") != NULL || strstr(paciente.sintomas, "e") != NULL) {
                        printf("\n!!ATENCIÓN!!\n");
                        printf("Cuarto 2: Pacientes con resfriado común\n");
                        printf("\nMedicamentos:\n");
                        printf("________________________\n");
                        printf("Agrifen cada 4 horas\n");
                        printf("Vick Vaporub frotar en el pecho\n");
                        printf("________________________\n");
                        pcr++;
                        printf("\n¿Desea registrar otro paciente? ");
                        scanf("%i", &c);
                        system("cls");
                    } else {
                        printf("\nTome precauciones\n");
                    }
                }

                // Agregar el paciente al arreglo
                pacientes[numPacientes] = paciente;
                numPacientes++;
            } while (c != 1);

            printf("_____EXPEDIENTE______ \n");
            for (int i = 0; i < numPacientes; i++) {
                Paciente paciente = pacientes[i];
                printf("| Nombre del paciente | %s\n", paciente.ndp);
                printf("| Sexo del paciente   | %c\n", paciente.sdp);
                printf("| Edad del paciente   | %i \n", paciente.edp);
                printf("| Peso del paciente   | %.2fkg\n", paciente.pdp);
                printf("| Altura del paciente | %.2f\n", paciente.adp);
                printf("| Temperatura         | %.2f°\n", paciente.tdp);
                printf("| Fecha de nacimiento | %f\n", paciente.fdn);
                printf("| Dirección           | %s\n", paciente.dir);
                printf("|____________________|\n");
            }

            printf("Historial del hospital\n");
            printf("Sexo de los pacientes | M: %i, H: %i \n", csf, csm);
            printf("Pacientes con resfriado común: %i \n", pcr);
            printf("Pacientes con fiebre: %i \n", pct);
        }
        printf("¿Desea entrar al hospital? ");
        scanf("%i", &po);
        system("cls");
    } while (po != 1);

    printf("Vuelva pronto\n");

    return 0;
}

