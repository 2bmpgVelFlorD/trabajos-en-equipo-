#include <stdio.h>
int main(int argc, char const *argv[])
{
	float cantidad, suma = 0;
	char opcion;
	do {
        printf("Ingrese una cantidad de dinero: ");
        scanf("%f", &cantidad);

        suma += cantidad;
	return 0;
}