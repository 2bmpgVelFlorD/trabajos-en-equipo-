#include<stdio.h>
int main()
{
    int suma,cant,valor,promedio;
    suma=0;
    cant=0;
    do {
        printf("Ingrese un valor (0 para finalizar):");
        scanf("%i",&valor);
        if (valor !=0 )
        {
            suma=suma+valor;
            cant++;
        }
    } while (valor != 0);
    if (cant!=0)
    {
        promedio=suma/cant;
        printf("El promedio de los valores ingresados es:");
        printf("%i",promedio);
    }
    else
    {
        printf("No se ingresaron valores.");
    }
    return 0;
}
