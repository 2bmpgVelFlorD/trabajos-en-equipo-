#include <stdio.h>
#include <stdlib.h>

#define MAX_PACIENTES 100
#define MAX_MEDICAMENTOS 5

struct Medicamento {
    char nombre[50];
    char horario[50];
};

struct Paciente {
    int id;
    char nombre[50];
    char apellido_Paterno[50];
    char apellido_Materno[50];
    char sexo[10];
    int edad;
    char sintomas[100];
    float peso;
    float talla;
    char fecha_de_Nacimiento[20];
    char direccion[100];
    char estado_Civil[20];
    int habitacion;
    int cama;
    struct Medicamento medicamentos[MAX_MEDICAMENTOS];
    int numMedicamentos;
};

struct Paciente pacientes[MAX_PACIENTES];
int numPacientes = 0;

void registrarPaciente() {
    struct Paciente paciente;

    printf("Registro de paciente\n");
    printf("ID: ");
    scanf("%d", &paciente.id);
    printf("Ingrese el nombre del paciente: ");
    scanf("%s", &paciente.nombre);
    printf("Ingrese el apellido paterno del paciente: ");
    scanf("%s",paciente.apellido_Paterno);
    printf("Ingrese el apellido materno del paciente: ");
    scanf("%s",&paciente.apellido_Materno);
    printf("Ingrese el sexo del paciente: ");
    scanf("%s",&paciente.sexo);
    printf("Que sintomas presenta el paciente?: ");
    scanf("%s",&paciente.sintomas);
    printf("Ingrese el peso del paciente: ");
    scanf("%f", &paciente.peso);
    printf("Ingrese la talla del paciente: ");
    scanf("%f", &paciente.talla);
    printf("Ingrese la fecha de nacimiento del paciente:");
    scanf("%s",&paciente.fecha_de_Nacimiento);
    printf("Ingrese la edad del paciente: ");
    scanf("%d", &paciente.edad);
    printf("Ingrese la dirección del paciente: ");
    scanf("%s", &paciente.direccion);
    printf("Cual es el estado civil del paciente?: ");
    scanf("%s",&paciente.estado_Civil);
    printf("No. de habitación del paciente: ");
    scanf("%d", &paciente.habitacion);
    printf("No. de cama del paciente: ");
    scanf("%d", &paciente.cama);

    printf("\n");

    printf("\nMedicamentos:\n");
    printf("Ingrese el número de medicamentos que seran suministrados al paciente: ");
    scanf("%d", &paciente.numMedicamentos);

    for (int i = 0; i < paciente.numMedicamentos; i++) {
        printf("\nMedicamento %d:\n", i + 1);
        printf("Nombre: ");
        scanf(" %[^\n]s", paciente.medicamentos[i].nombre);
        printf("Horario: ");
        scanf(" %[^\n]s", paciente.medicamentos[i].horario);
    }

    pacientes[numPacientes++] = paciente;

    printf("\n¡Paciente registrado con éxito!\n\n");
}

void mostrarPacientes() {
    printf("Lista de pacientes:\n\n");
    for (int i = 0; i < numPacientes; i++) {
        struct Paciente paciente = pacientes[i];
        printf("ID: %d\n", paciente.id);
        printf("Nombre: %s\n", paciente.nombre);
        printf("Apellido Paterno : %s\n",paciente.apellido_Paterno);
        printf("Apellido Materno : %s\n",paciente.apellido_Materno);
        printf("Sexo: %s\n",paciente.sexo);
        printf("Edad: %d\n", paciente.edad);
        printf("Sintomas: %s\n",paciente.sintomas);
        printf("Peso: %.2fkg\n", paciente.peso);
        printf("Talla: %.2fcm\n", paciente.talla);
        printf("Fecha de Nacimiento: %s\n",paciente.fecha_de_Nacimiento);
        printf("Dirección: %s\n", paciente.direccion);
        printf("Estado Civil: %s\n",paciente.estado_Civil);
        printf("No. de habitación: %d\n", paciente.habitacion);
        printf("No.de cama: %d\n", paciente.cama);
        printf("Medicamentos:\n");

        for (int j = 0; j < paciente.numMedicamentos; j++) {
            printf("  Medicamento %d:\n", j + 1);
            printf("  Nombre: %s\n", paciente.medicamentos[j].nombre);
            printf("  Horario: %s\n", paciente.medicamentos[j].horario);
        }

        printf("\n");
    }
}

int main() {
    int opcion;

    do {
        printf("Sistema de gestión de pacientes\n");
        printf("1. Registrar paciente\n");
        printf("2. Mostrar pacientes\n");
        printf("3. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                registrarPaciente();
                break;
            case 2:
                mostrarPacientes();
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }
    } while (opcion != 3);

    return 0;
}
