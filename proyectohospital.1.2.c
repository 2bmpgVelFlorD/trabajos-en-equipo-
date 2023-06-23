#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct {
    char nombre[50];
    char horario[50];
} Medicamento;

typedef struct {
    char nombre[50];
    char apellido_Paterno[50];
    char apellido_Materno[50];
    char sexo[10];
    char fecha_de_Nacimiento[20];
    int edad;
    char estado_Civil[20];
    char direccion[100];
    float peso;
    float talla;
    float altura;
    float imc;
    char sintomas[100];
    float azucar;
    int activo;
    int cama;
} Paciente;

void limpiarPantalla() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void mostrarBienvenida() {
    printf("Bienvenido al Hospital Humanitas\n");
    printf("El horario de atención solo está disponible de 5 A.M a 12 P.M\n");
}

void mostrarMenuInicio() {
    printf("\n_______________\n");
    printf("Ingresa el número 1 para seguir avanzando: ");
}

void registrarPaciente(Paciente *paciente) {
    printf("\n_______________\n");
    printf("Registro de paciente\n");
    printf("Por favor ingrese correctamente cada uno de los siguientes datos:\n");
    printf("Ingrese el nombre del paciente: ");
    scanf("%s", paciente->nombre);
    printf("Ingrese el apellido paterno del paciente: ");
    scanf("%s", paciente->apellido_Paterno);
    printf("Ingrese el apellido materno del paciente: ");
    scanf("%s", paciente->apellido_Materno);
    printf("Ingrese el sexo del paciente: ");
    scanf("%s", paciente->sexo);
    printf("Ingrese la fecha de nacimiento del paciente: ");
    scanf("%s", paciente->fecha_de_Nacimiento);
    printf("Ingrese la edad del paciente: ");
    scanf("%d", &paciente->edad);
    printf("Cual es el estado civil del paciente?: ");
    scanf("%s", paciente->estado_Civil);
    printf("Ingrese la dirección del paciente: ");
    scanf("%s", paciente->direccion);
    printf("Ingrese el peso del paciente (en kg): ");
    scanf("%f", &paciente->peso);
    printf("Ingrese la talla del paciente (en cm): ");
    scanf("%f", &paciente->talla);
    printf("Ingrese la altura del paciente (en m): ");
    scanf("%f", &paciente->altura);
    printf("Nivel de azúcar en sangre: ");
    scanf("%f", &paciente->azucar);
    printf("Número de cama del paciente: ");
    scanf("%d", &paciente->cama);
}

void mostrarDiagnostico(int csm, int csf, int pcd, int pdt, Paciente paciente) {
    printf("__DIAGNÓSTICO FINAL__\n");
    printf("| Nombre del paciente  | %s\n", paciente.nombre);
    printf("| Apellido paterno     | %s\n", paciente.apellido_Paterno);
    printf("| Apellido materno     | %s\n", paciente.apellido_Materno);
    printf("| Sexo del paciente    | %s\n", paciente.sexo);
    printf("| Fecha de nacimiento  | %s\n", paciente.fecha_de_Nacimiento);
    printf("| Edad del paciente    | %d\n", paciente.edad);
    printf("| Estado Civil         | %s\n", paciente.estado_Civil);
    printf("| Peso del paciente    | %.2f kg\n", paciente.peso);
    printf("| Talla del paciente   | %.2f cm\n", paciente.talla);
    printf("| Altura del paciente  | %.2f m\n", paciente.altura);
    paciente.imc = paciente.peso / ((paciente.talla / 100) * (paciente.talla / 100));
    printf("| IMC del paciente     | %.2f\n", paciente.imc);
    printf("| Cama del paciente    | %d\n", paciente.cama);
    printf("| Nivel de azúcar      | %.2f mg/dl\n", paciente.azucar);
    printf("|______________________|\n");

    printf("Historial del hospital\n");
    printf("Sexo o genero de los pacientes | M: %d, F: %d\n", csm, csf);
    printf("Pacientes con posible diabetes: %d\n", pcd);
    printf("Pacientes con diabetes detectada: %d\n", pdt);
}

void mostrarOpciones() {
    printf("\nOpciones:\n");
    printf("[1] Dar de alta al paciente\n");
    printf("[2] Dar de baja al paciente\n");
    printf("Seleccione una opción: ");
}

int main() {
    int csm = 0, pcd = 0, csf = 0, pdt = 0;
    Paciente paciente;
    int numero, n, c, po;

    do {
        limpiarPantalla();
        mostrarBienvenida();
        printf("Indique la hora en la que está solicitando nuestros servicios: ");
        scanf("%i", &numero);

        if (numero >= 7 && numero <= 24) {
            do {
                do {
                    limpiarPantalla();
                    mostrarMenuInicio();
                    scanf("%i", &n);
                    if (n == 1) {
                        limpiarPantalla();
                        mostrarBienvenida();
                    } else {
                        printf("El número que ingresó es incorrecto\n");
                    }
                } while (n != 1);

                registrarPaciente(&paciente);
                limpiarPantalla();

                paciente.activo = 1;
                if (tolower(paciente.sexo[0]) == 'm') {
                    csm++;
                } else if (tolower(paciente.sexo[0]) == 'f') {
                    csf++;
                }

                if (paciente.azucar > 126) {
                    printf("\nEl paciente tiene un nivel de azúcar en la sangre muy alto\n");
                    printf("Sera trasladado al cuarto 1: Pacientes con posible diabetes\n");
                    printf("El tratamiento que deberá llevar es:\n");
                    printf("\n_____________________\n");
                    printf("insulina    cada 3 horas\n");
                    printf("llevar una buena alimentación\n");
                    printf("_____________________\n");
                    pcd++;
                    printf("\nDesea registrar los datos de otro paciente: [0] sí, [1] no: ");
                    scanf("%i", &c);
                    limpiarPantalla();
                } else {
                    printf("\nCuide mucho su alimentación\n");
                    printf("Describa qué síntomas ha presentado: Fatiga, Vista borrosa, Aumento de apetito, Úlceras\n");
                    scanf("%s", paciente.sintomas);
                    for (int i = 0; i < strlen(paciente.sintomas); ++i) {
                        paciente.sintomas[i] = tolower(paciente.sintomas[i]);
                    }

                    if (strstr(paciente.sintomas, "f") != NULL || strstr(paciente.sintomas, "vb") != NULL ||
                        strstr(paciente.sintomas, "ap") != NULL || strstr(paciente.sintomas, "ul") != NULL) {
                        printf("\nEl paciente tiene diabetes\n");
                        printf("Será trasladado al cuarto 2: Pacientes con diabetes confirmada\n");
                        printf("El tratamiento será más riguroso y es el siguiente:\n");
                        printf("\n___________________________\n");
                        printf("Metformina 500mg diarios al día\n");
                        printf("Repaglinida 2mg diarios al día\n");
                        printf("Acarbosa 25mg tres veces al día\n");
                        printf("____________________________\n");
                        pdt++;
                        printf("\nDesea registrar los datos de otro paciente: [0] sí, [1] no: ");
                        scanf("%i", &c);
                        limpiarPantalla();
                    } else {
                        printf("\nLleve correctamente su tratamiento\n");
                    }
                }
            } while (c != 1);

            mostrarDiagnosticoFinal(paciente);

            printf("Historial del hospital\n");
            printf("Sexo o genero de los pacientes | M: %d, F: %d\n", csm, csf);
            printf("Pacientes con posible diabetes: %d\n", pcd);
            printf("Pacientes con diabetes detectada: %d\n", pdt);

            int opcion;
            mostrarOpciones();
            scanf("%i", &opcion);

            switch (opcion) {
                case 1:
                    printf("El paciente ha sido dado de alta.\n");
                    break;
                case 2:
                    paciente.activo = 0;
                    printf("El paciente ha sido dado de baja.\n");
                    break;
                default:
                    printf("Opción inválida.\n");
                    break;
            }
        }

        printf("Desea ingresar al hospital [1]no, [0]si: ");
        scanf("%i", &po);
        limpiarPantalla();
    } while (po != 1);

    printf("Vuelva pronto.\n");

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct {
    char nombre[50];
    char horario[50];
} Medicamento;

typedef struct {
    char nombre[50];
    char apellido_Paterno[50];
    char apellido_Materno[50];
    char sexo[10];
    char fecha_de_Nacimiento[20];
    int edad;
    char estado_Civil[20];
    char direccion[100];
    float peso;
    float talla;
    float altura;
    float imc;
    char sintomas[100];
    float azucar;
    int activo;
    int cama;
} Paciente;

void limpiarPantalla() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void mostrarBienvenida() {
    printf("Bienvenido al Hospital Humanitas\n");
    printf("El horario de atención solo está disponible de 5 A.M a 12 P.M\n");
}

void mostrarMenuInicio() {
    printf("\n_______________\n");
    printf("Ingresa el número 1 para seguir avanzando: ");
}

void registrarPaciente(Paciente *paciente) {
    printf("\n_______________\n");
    printf("Registro de paciente\n");
    printf("Por favor ingrese correctamente cada uno de los siguientes datos:\n");
    printf("Ingrese el nombre del paciente: ");
    scanf("%s", paciente->nombre);
    printf("Ingrese el apellido paterno del paciente: ");
    scanf("%s", paciente->apellido_Paterno);
    printf("Ingrese el apellido materno del paciente: ");
    scanf("%s", paciente->apellido_Materno);
    printf("Ingrese el sexo del paciente: ");
    scanf("%s", paciente->sexo);
    printf("Ingrese la fecha de nacimiento del paciente: ");
    scanf("%s", paciente->fecha_de_Nacimiento);
    printf("Ingrese la edad del paciente: ");
    scanf("%d", &paciente->edad);
    printf("Cual es el estado civil del paciente?: ");
    scanf("%s", paciente->estado_Civil);
    printf("Ingrese la dirección del paciente: ");
    scanf("%s", paciente->direccion);
    printf("Ingrese el peso del paciente (en kg): ");
    scanf("%f", &paciente->peso);
    printf("Ingrese la talla del paciente (en cm): ");
    scanf("%f", &paciente->talla);
    printf("Ingrese la altura del paciente (en m): ");
    scanf("%f", &paciente->altura);
    printf("Nivel de azúcar en sangre: ");
    scanf("%f", &paciente->azucar);
    printf("Número de cama del paciente: ");
    scanf("%d", &paciente->cama);
}

void mostrarDiagnostico(int csm, int csf, int pcd, int pdt, Paciente paciente) {
    printf("__DIAGNÓSTICO FINAL__\n");
    printf("| Nombre del paciente  | %s\n", paciente.nombre);
    printf("| Apellido paterno     | %s\n", paciente.apellido_Paterno);
    printf("| Apellido materno     | %s\n", paciente.apellido_Materno);
    printf("| Sexo del paciente    | %s\n", paciente.sexo);
    printf("| Fecha de nacimiento  | %s\n", paciente.fecha_de_Nacimiento);
    printf("| Edad del paciente    | %d\n", paciente.edad);
    printf("| Estado Civil         | %s\n", paciente.estado_Civil);
    printf("| Peso del paciente    | %.2f kg\n", paciente.peso);
    printf("| Talla del paciente   | %.2f cm\n", paciente.talla);
    printf("| Altura del paciente  | %.2f m\n", paciente.altura);
    paciente.imc = paciente.peso / ((paciente.talla / 100) * (paciente.talla / 100));
    printf("| IMC del paciente     | %.2f\n", paciente.imc);
    printf("| Cama del paciente    | %d\n", paciente.cama);
    printf("| Nivel de azúcar      | %.2f mg/dl\n", paciente.azucar);
    printf("|______________________|\n");

    printf("Historial del hospital\n");
    printf("Sexo o genero de los pacientes | M: %d, F: %d\n", csm, csf);
    printf("Pacientes con posible diabetes: %d\n", pcd);
    printf("Pacientes con diabetes detectada: %d\n", pdt);
}

void mostrarOpciones() {
    printf("\nOpciones:\n");
    printf("[1] Dar de alta al paciente\n");
    printf("[2] Dar de baja al paciente\n");
    printf("Seleccione una opción: ");
}

int main() {
    int csm = 0, pcd = 0, csf = 0, pdt = 0;
    Paciente paciente;
    int numero, n, c, po;

    do {
        limpiarPantalla();
        mostrarBienvenida();
        printf("Indique la hora en la que está solicitando nuestros servicios: ");
        scanf("%i", &numero);

        if (numero >= 7 && numero <= 24) {
            do {
                do {
                    limpiarPantalla();
                    mostrarMenuInicio();
                    scanf("%i", &n);
                    if (n == 1) {
                        limpiarPantalla();
                        mostrarBienvenida();
                    } else {
                        printf("El número que ingresó es incorrecto\n");
                    }
                } while (n != 1);

                registrarPaciente(&paciente);
                limpiarPantalla();

                paciente.activo = 1;
                if (tolower(paciente.sexo[0]) == 'm') {
                    csm++;
                } else if (tolower(paciente.sexo[0]) == 'f') {
                    csf++;
                }

                if (paciente.azucar > 126) {
                    printf("\nEl paciente tiene un nivel de azúcar en la sangre muy alto\n");
                    printf("Sera trasladado al cuarto 1: Pacientes con posible diabetes\n");
                    printf("El tratamiento que deberá llevar es:\n");
                    printf("\n_____________________\n");
                    printf("insulina    cada 3 horas\n");
                    printf("llevar una buena alimentación\n");
                    printf("_____________________\n");
                    pcd++;
                    printf("\nDesea registrar los datos de otro paciente: [0] sí, [1] no: ");
                    scanf("%i", &c);
                    limpiarPantalla();
                } else {
                    printf("\nCuide mucho su alimentación\n");
                    printf("Describa qué síntomas ha presentado: Fatiga, Vista borrosa, Aumento de apetito, Úlceras\n");
                    scanf("%s", paciente.sintomas);
                    for (int i = 0; i < strlen(paciente.sintomas); ++i) {
                        paciente.sintomas[i] = tolower(paciente.sintomas[i]);
                    }

                    if (strstr(paciente.sintomas, "f") != NULL || strstr(paciente.sintomas, "vb") != NULL ||
                        strstr(paciente.sintomas, "ap") != NULL || strstr(paciente.sintomas, "ul") != NULL) {
                        printf("\nEl paciente tiene diabetes\n");
                        printf("Será trasladado al cuarto 2: Pacientes con diabetes confirmada\n");
                        printf("El tratamiento será más riguroso y es el siguiente:\n");
                        printf("\n___________________________\n");
                        printf("Metformina 500mg diarios al día\n");
                        printf("Repaglinida 2mg diarios al día\n");
                        printf("Acarbosa 25mg tres veces al día\n");
                        printf("____________________________\n");
                        pdt++;
                        printf("\nDesea registrar los datos de otro paciente: [0] sí, [1] no: ");
                        scanf("%i", &c);
                        limpiarPantalla();
                    } else {
                        printf("\nLleve correctamente su tratamiento\n");
                    }
                }
            } while (c != 1);

            mostrarDiagnosticoFinal(paciente);

            printf("Historial del hospital\n");
            printf("Sexo o genero de los pacientes | M: %d, F: %d\n", csm, csf);
            printf("Pacientes con posible diabetes: %d\n", pcd);
            printf("Pacientes con diabetes detectada: %d\n", pdt);

            int opcion;
            mostrarOpciones();
            scanf("%i", &opcion);

            switch (opcion) {
                case 1:
                    printf("El paciente ha sido dado de alta.\n");
                    break;
                case 2:
                    paciente.activo = 0;
                    printf("El paciente ha sido dado de baja.\n");
                    break;
                default:
                    printf("Opción inválida.\n");
                    break;
            }
        }

        printf("Desea ingresar al hospital [1]no, [0]si: ");
        scanf("%i", &po);
        limpiarPantalla();
    } while (po != 1);

    printf("Vuelva pronto.\n");

    return 0;
}
