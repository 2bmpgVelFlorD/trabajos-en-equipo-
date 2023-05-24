#include<stdio.h>
#include<math.h>
int main(){
  int porc,pres,mes,tot;
  printf("ingrese los meses\n");
  scanf("%i",&mes);
  printf("ingrese el prestamo\n");
  scanf("%i",&pres);
  printf("ingrese el porcentaje de interes\n");
  scanf("%i",&porc);
  tot=mes*pres*porc;
  printf("monto %i\n",tot);
  
  return 0;
}
