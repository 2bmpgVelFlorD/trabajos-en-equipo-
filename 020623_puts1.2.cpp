#include <stdio.h>

int main() {
    int nota;
    
    printf("Ingrese la nota (entre 1 y 10): ");
    scanf("%d", &nota);
    
    if (nota > 0) {
        puts("Aprobado");
    }
    
    return 0;
}

