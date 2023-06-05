#include<stdio.h>
int main(){
    int tipodevehiculo;
    float importe, importepagado, cambio;
    printf("ingresa el tipo de vehiculo 1)automovil, 2)autobus, 3)motocicleta");
    scanf("%d", &tipodevehiculo);
    switch(tipodevehiculo){
        case 1:
        importe=500;
        break;
        case 2:
        importe=600;
        break;
        case 3:
        importe=100;
        break;
        default:
        printf("tipo de vehiculo no valido.\n");
        return 0;
    }
        printf("ingrese el importe pagado");
        scanf("%f", &importepagado);
        cambio=importepagado-importe;
        printf("el importe de cambio es: %.2f\n", cambio);
        return 0;
}
