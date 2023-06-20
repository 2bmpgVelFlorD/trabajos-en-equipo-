#include <stdio.h>

void mostrarDatos(const char *nombre, char **direccion) {
    printf("Nombre: %s\n", nombre);
    printf("Dirección: %s\n", *direccion);
}

int main() {
    char direccion[100];
    printf("Ingrese su nombre: ");
    
    char nombre[100];
    scanf("%s", nombre);
    
    printf("Ingrese su dirección: ");
    scanf("%s", direccion);
    
    mostrarDatos(nombre, &direccion);
    
    return 0;
}
