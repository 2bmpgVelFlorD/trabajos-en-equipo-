#include <stdio.h>//libreria estandar
#include <string.h>//con ella podemos trabajar con cadenas,comparar y concatenar
#include<stdlib.h>//en ello encontramos  el comando como cls 
#include <ctype.h>//esta libreria convierte caracteres a minusculas (letra,digito)
int main() {
      int csm = 0, pcr = 0, csf = 0, pct = 0;//contadores inicializados en cero
    char ndp[200];float fdn,adp,idp;char dir[200];//nombre del paciente,fecha de nacimiento,altura,y direccion
    char sdp;//sexo del paciente
    int edp;//edad del paciente
    float pdp, tdp;//tdp=temperatura del paciente pdp=peso del paciente
    char sintomas[100];//sintomas
    int c, po;//po do-while(principal),do-while(secundario c)
    int numero,n;//numero (hora ),n(do-while logo del hospital)

    do {//principal
        printf("Nuestro horario de atencion es de 7 A.M a 12 P.M\n");
        printf("¿Cuál es la hora? ");
        scanf("%i", &numero);

        if (numero >= 7 && numero <= 24) {//horario
            do {//secundario
                do {//terciario
                    printf("\n____________");//23-28 logo
                    printf("\n|   IMSS   |");
                    printf("\n| ||    || |");
                    printf("\n|   _____  |");
                    printf("\n|___|*|*|__|");
                    printf("\n___________________ ");
                    printf("\ningresa el numero 1\n");
                    scanf("%i", &n);

                    if (n == 1) {
                        printf("bienvenido\n");
                        system("cls");//stdlib
                    } else {
                        printf("ese no es\n");
                    }
                } while (n != 1);//da paso al hospital fin del bucle terciario

                printf("\n_____________________________________\n");//40-58 datos
                printf("proporciona los siguientes datos\n");
                printf("como se llama: ");
                scanf("%199s", ndp);//199s sirve pra evitar problemas de sobreescritura
                 printf("direccion (opc con guiones bajos):");
                scanf("%199s", dir);//el 199s evita el desbordamiento del bufeer o buffer overflow
                 printf("Fecha de nacimiento  (sin espacios):");
                scanf("%f", &fdn);
                printf("sexo: ");
                scanf(" %c", &sdp);
                printf("edad: ");
                scanf("%i", &edp);
                printf("peso: ");
                scanf("%f", &pdp);
                printf("altura:(redondeada) ");
                scanf("%f", &adp);
                idp=pdp/adp*adp;
                printf("IMC %.2f\n",idp);
                printf("temperatura: ");
                scanf("%f", &tdp);
                printf("_____________________________________");
                system("cls");

                // Contar el sexo del paciente
                if (tolower(sdp) == 'm') {
                    csm++;
                } else if (tolower(sdp) == 'f') {
                    csf++;
                }
                //prueba logica si el paciente presenta fiebre
                if (tdp > 37.2) {
                    printf("\n!!ATENCION!!\n");
                    printf("\ncuarto 1: Pacientes con fiebre\n");
                    printf("\nMedicamentos:\n");
                    printf("\n________________________\n");
                    printf("\nparacetamol cada 4 horas\n");
                    printf("\nibuprofeno cada 6 horas\n");
                    printf("\n________________________\n");
                    pct++;//contador de pacientes con fiebre 
                    printf("\ndesea registrar otro paciente: 1(no),0(si)");
                    scanf("%i", &c);
                    system("cls");
                } else {//en caso de no tener fiebre lee sus sintomas
                    printf("\ntome precauciones\n");
                    printf("Describa sus síntomas:,tos,congestion nasal,dolor de garganta,estornudos\n");
                    scanf("%s", sintomas);
                    for (int i = 0; i < strlen(sintomas); i++) {//strlen determina la long de la cadena 
                        sintomas[i] = tolower(sintomas[i]);//tolower convierte a minusculaspara comparar los sintomas en la prueba logica
                    }
                                    //tos                           //congestion nasal              //dolor de garganta         //estornudos
                    if (strstr(sintomas, "t") != NULL || strstr(sintomas, "cn") != NULL || strstr(sintomas, "dg") != NULL || strstr(sintomas, "e") != NULL) {
                     //strstr busca en la subcadena  (NULL )comparacion
                        printf("\n!!ATENCIÓN!!\n");//medicamento
                        printf("\nCuarto 2: Pacientes con resfriado común\n");
                        printf("\nMedicamentos:\n");
                        printf("\n________________________\n");
                        printf("\nAgrifen cada 4 horas\n");
                        printf("\nVick Vaporub frotar en el pecho\n");
                        printf("\n________________________\n");
                        pcr++;//contador pacietes con resfriado
                        printf("\ndesea registrar otro paciente: 1(no),0(si) ");
                        scanf("%i", &c);
                        system("cls");
                    } else {
                        printf("\nTome precauciones\n");
                    }
                }
            } while (c != 1);//fin del bucle secundario

            printf("_____EXPEDIENTE______ \n");//datos del paciente
            printf("|nombre del paciente |%s\n", ndp);
            printf("|sexo del paciente   |%c\n",sdp);
            printf("|edad del paciente   |%i \n", edp);
            printf("|peso del paciente   |%.2fkg\n",pdp);
            printf("|altura del paciente |%.2fmetros\n", adp);
            printf("|IMC                 |%.1f\n",idp);
            printf("|temperatura         | %.2f°\n",tdp);
            printf("|fecha de nacimiento | %.1f\n",fdn);
            printf("|direccion           | %s\n", dir);
            printf("|____________________|\n");


            printf("historial del hospital\n");//se mustran los contadores
            printf("sexo de los pacientes |m: %i, h: %i \n", csf, csm);
            printf("pacientes con resfriado común: %i \n", pcr);
            printf("pacientes con fiebre: %i \n", pct);
        }
        printf("desea entrar al hospital: 1(no),0(si) ");
        scanf("%i", &po);
        system("cls");
    } while (po != 1);//fin del bucle primario

    printf("Vuelva pronto\n");//en caso de salir se despide el programa 

    return 0;
}
