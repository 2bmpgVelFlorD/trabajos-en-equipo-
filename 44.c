#include <stdio.h>
int main(int argc, char const *argv[])
{
	float cantidad, suma = 0;
	char opcion;
	do {
        printf("Ingrese una cantidad de dinero: ");
        scanf("%f", &cantidad);

        suma += cantidad;
                printf("¿Desea ingresar más dinero? (S/N): ");
        scanf(" %c", &opcion);
            } while (opcion == 'S' || opcion == 's');
             printf("La suma total de dinero es: $%.2f\n", suma);

	return 0;
}