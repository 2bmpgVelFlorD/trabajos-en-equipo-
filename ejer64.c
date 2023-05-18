#include<stdio.h>
int main(){
  float i;
  float p;
  float resultado;
  float t;
  printf("ingresa la cantidad de tu prestamo\n");
  scanf("%f",&p);
  printf("ingresa el tiempo\n");
  scanf("%f",&t);
  printf("INGRESA TASA DE INTERESES\n");
  scanf("%f",&i);
  resultado=(p*i*t)/100;
  printf("el interes%fmeses es de%f\n", t, resultado);
  return 0;
}
      
