
#include<stdio.h>

int main()
{
int i;
float calificaciones[5][5],promedio=0;
printf("Programa que calcula el promedio de 5 calificaciones...\n");

for(i=0;i<5;i++) {
    printf("Dame la calificación %d:  ",i+1);
    scanf("%f",&calificaciones[i]);
    promedio += calificaciones[i];swsss
    printf("\n");
    }
    printf("El promedio es:  %.2f\n\n",promedio/5);

}
