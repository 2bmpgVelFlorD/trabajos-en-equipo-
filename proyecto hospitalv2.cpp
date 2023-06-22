#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_PATIENTS 100

typedef struct {
    char name[50];
    int age;
    char gender;
    float height;
    float weight;
    int roomNumber;
    int numMedications;
    char medications[10][50];
    char medicationSchedule[10][20];
    bool isActive;
} Patient;

float calculateBMI(float height, float weight) {
    return weight / (height * height);
}

void printPatientData(Patient patient) {
    printf("\n=== Datos del Paciente ===\n");
    printf("Nombre: %s\n", patient.name);
    printf("Edad: %d\n", patient.age);
    printf("Género: %c\n", patient.gender);
    printf("Altura: %.2f\n", patient.height);
    printf("Peso: %.2f\n", patient.weight);
    printf("Número de habitación: %d\n", patient.roomNumber);
    printf("Número de medicamentos: %d\n", patient.numMedications);
    printf("Medicamentos:\n");
    for (int i = 0; i < patient.numMedications; i++) {
        printf("%s - Horario: %s\n", patient.medications[i], patient.medicationSchedule[i]);
    }
}

int main() {
    Patient patients[MAX_PATIENTS];
    int numPatients = 0;
    
    int option;
    do {
        printf("\n=== Registro de Pacientes ===\n");
        printf("1. Registrar un nuevo paciente\n");
        printf("2. Mostrar datos de un paciente\n");
        printf("3. Calcular el IMC de un paciente\n");
        printf("4. Dar de alta a un paciente\n");
        printf("5. Dar de baja a un paciente\n");
        printf("6. Mostrar información general\n");
        printf("7. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &option);
        
        switch (option) {
            case 1: {
                if (numPatients >= MAX_PATIENTS) {
                    printf("No es posible registrar más pacientes. Capacidad máxima alcanzada.\n");
                } else {
                    Patient patient;
                    
                    printf("=== Registro de un nuevo paciente ===\n");
                    printf("Ingrese el nombre del paciente: ");
                    scanf("%s", patient.name);
                    printf("Ingrese la edad del paciente: ");
                    scanf("%d", &patient.age);
                    printf("Ingrese el género del paciente (M/F): ");
                    scanf(" %c", &patient.gender);
                    printf("Ingrese la altura del paciente en metros: ");
                    scanf("%f", &patient.height);
                    printf("Ingrese el peso del paciente en kg: ");
                    scanf("%f", &patient.weight);
                    printf("Ingrese el número de habitación asignado: ");
                    scanf("%d", &patient.roomNumber);
                    printf("Ingrese el número de medicamentos que toma: ");
                    scanf("%d", &patient.numMedications);
                    printf("Ingrese los nombres de los medicamentos y su horario:\n");
                    for (int i = 0; i < patient.numMedications; i++) {
                        scanf("%s", patient.medications[i]);
                        scanf("%s", patient.medicationSchedule[i]);
                    }
                    patient.isActive = true;
                    
                    patients[numPatients++] = patient;
                    printf("El paciente ha sido registrado correctamente.\n");
                }
                break;
            }
            case 2: {
                if (numPatients == 0) {
                    printf("No hay pacientes registrados.\n");
                } else {
                    int patientIndex;
                    printf("Ingrese el índice del paciente a mostrar (0 - %d): ", numPatients - 1);
                    scanf("%d", &patientIndex);
                    
                    if (patientIndex < 0 || patientIndex >= numPatients) {
                        printf("Índice de paciente inválido.\n");
                    } else {
                        printPatientData(patients[patientIndex]);
                    }
                }
                break;
            }
            case 3: {
                if (numPatients == 0) {
                    printf("No hay pacientes registrados.\n");
                } else {
                    int patientIndex;
                    printf("Ingrese el índice del paciente para calcular el IMC (0 - %d): ", numPatients - 1);
                    scanf("%d", &patientIndex);
                    
                    if (patientIndex < 0 || patientIndex >= numPatients) {
                        printf("Índice de paciente inválido.\n");
                    } else {
                        Patient patient = patients[patientIndex];
                        float bmi = calculateBMI(patient.height, patient.weight);
                        printf("\n=== Cálculo del IMC ===\n");
                        printf("Paciente: %s\n", patient.name);
                        printf("Índice de Masa Corporal (IMC): %.2f\n", bmi);
                        if (bmi > 25.0) {
                            printf("¡El paciente tiene sobrepeso!\n");
                        } else {
                            printf("El paciente está dentro del rango de peso saludable.\n");
                        }
                    }
                }
                break;
            }
            case 4: {
                if (numPatients == 0) {
                    printf("No hay pacientes registrados.\n");
                } else {
                    int patientIndex;
                    printf("Ingrese el índice del paciente para dar de alta (0 - %d): ", numPatients - 1);
                    scanf("%d", &patientIndex);
                    
                    if (patientIndex < 0 || patientIndex >= numPatients) {
                        printf("Índice de paciente inválido.\n");
                    } else {
                        patients[patientIndex].isActive = true;
                        printf("El paciente ha sido dado de alta.\n");
                    }
                }
                break;
            }
            case 5: {
                if (numPatients == 0) {
                    printf("No hay pacientes registrados.\n");
                } else {
                    int patientIndex;
                    printf("Ingrese el índice del paciente para dar de baja (0 - %d): ", numPatients - 1);
                    scanf("%d", &patientIndex);
                    
                    if (patientIndex < 0 || patientIndex >= numPatients) {
                        printf("Índice de paciente inválido.\n");
                    } else {
                        patients[patientIndex].isActive = false;
                        printf("El paciente ha sido dado de baja.\n");
                    }
                }
                break;
            }
            case 6: {
                printf("\n=== Información General ===\n");
                printf("Total de pacientes registrados: %d\n", numPatients);
                printf("Pacientes activos:\n");
                for (int i = 0; i < numPatients; i++) {
                    if (patients[i].isActive) {
                        printf("- %s\n", patients[i].name);
                    }
                }
                printf("Pacientes dados de baja:\n");
                for (int i = 0; i < numPatients; i++) {
                    if (!patients[i].isActive) {
                        printf("- %s\n", patients[i].name);
                    }
                }
                break;
            }
            case 7: {
                printf("Saliendo del programa\n");
                break;
            }
            default:
                printf("Opción inválida. Intente nuevamente.\n");
                break;
        }
    } while (option != 7);
    
    return 0;
}
