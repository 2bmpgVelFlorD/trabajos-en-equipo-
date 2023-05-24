#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_INTENTOS 3
#define CONTRASENA_CORRECTA "1234"
#define saldo 1000
int main() {
    char contrasena[20];
    int intentos = 0,r,sacr,abonar,tca;
    
    while (intentos < MAX_INTENTOS) {
        printf("Ingrese la contraseña: ");
        scanf("%s", contrasena);
          if (strcmp(contrasena, CONTRASENA_CORRECTA) == 0) {
            printf("Contraseña correcta. Acceso concedido.\n");
            break;
        } else {
            printf("Contraseña incorrecta. Intentos restantes: %d\n", MAX_INTENTOS - intentos - 1);
            intentos++;
        }
    }

    if (intentos == MAX_INTENTOS) {
        printf("Demasiados intentos fallidos. Saliendo del programa.\n");
        exit(0);
    }
    int opcion;
       do {
        printf("\n----- MENÚ -----\n");
        printf("1. Retirar saldo\n");
        printf("2. Abonar saldo\n");
        printf("3. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);