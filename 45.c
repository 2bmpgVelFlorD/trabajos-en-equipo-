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