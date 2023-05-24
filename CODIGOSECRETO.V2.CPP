#include<stdio.h>
int main(){
  int numeroz;
  printf("ingrese su numero a adivinar\n");
  scanf("%i",&numeroz);
  if(numeroz==25){
    printf("el numero es correcto\n");
  }else{
    if(numeroz>25){
      printf("el numero es mayor del secreto\n");
    }else{
      if(numeroz<25){
        printf("el numero es menor del secreto\n");
      }
    }
  }
  return 0;
}
