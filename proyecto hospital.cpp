#include <stdio.h>
#include <stdlib.h>
#define MAX_MEDICINES 5
#define MAX_PATIENTS 100
typedef struct {
    int id;
    char name[50];
    int roomNumber;
    int medicineCount;
    char medicines[MAX_MEDICINES][50];
    char medicineSchedule[MAX_MEDICINES][50];
} Patient;
void registerPatient(Patient* patient) {
    printf("Ingrese el ID del paciente: ");
    scanf("%d", &patient->id);
    printf("Ingrese el nombre del paciente: ");
    scanf("%s", patient->name);
    printf("Ingrese el número de habitación del paciente: ");
    scanf("%d", &patient->roomNumber);
    printf("Ingrese el número de medicamentos del paciente: ");
    scanf("%d", &patient->medicineCount);
    printf("Ingrese los nombres de los medicamentos y su horario:\n");
    for (int i = 0; i < patient->medicineCount; i++) {
        printf("Medicamento %d: ", i + 1);
        scanf("%s", patient->medicines[i]);
        printf("Horario del medicamento %d: ", i + 1);
        scanf("%s", patient->medicineSchedule[i]);
    }
}
void displayPatientData(const Patient* patient) {
    printf("ID del paciente: %d\n", patient->id);
    printf("Nombre del paciente: %s\n", patient->name);
    printf("Número de habitación del paciente: %d\n", patient->roomNumber);
    printf("Medicamentos del paciente:\n");
    for (int i = 0; i < patient->medicineCount; i++) {
        printf("Medicamento %d: %s\n", i + 1, patient->medicines[i]);
        printf("Horario del medicamento %d: %s\n", i + 1, patient->medicineSchedule[i]);
    }
}
int main() {
    Patient patients[MAX_PATIENTS];
    int patientCount = 0;
    int choice;
    do {
        printf("\n--- Hospital Management ---\n");
        printf("1. Registrar paciente\n");
        printf("2. Mostrar datos del paciente\n");
        printf("3. Salir\n");
        printf("Ingrese su elección: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (patientCount < MAX_PATIENTS) {
                    printf("\nRegistro del paciente #%d\n", patientCount + 1);
                    registerPatient(&patients[patientCount]);
                    patientCount++;
                    printf("\n¡Paciente registrado con éxito!\n");
                } else {
                    printf("\n¡La capacidad del hospital ha sido alcanzada!\n");
                }
                break;
            case 2:
                printf("\nMostrar datos de paciente\n");
                printf("Ingrese el ID del paciente: ");
                int patientId;
                scanf("%d", &patientId);
                for (int i = 0; i < patientCount; i++) {
                    if (patients[i].id == patientId) {
                        displayPatientData(&patients[i]);
                        break;
                    }
                }
                break;
            case 3:
                printf("\nSaliendo del sistema...\n");
                break;
            default:
                printf("\nOpción no válida. Inténtelo de nuevo.\n");
                break;
        }
    } while (choice != 3);
    return 0;
}
