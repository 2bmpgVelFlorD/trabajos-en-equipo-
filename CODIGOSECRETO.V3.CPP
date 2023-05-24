#include<stdio.h>
int main(){
  int opc,numeroc;
  while(opc=1){
    printf("ingrese num a adivinar\n");
    scanf("%i",&numeroc);
    if(numeroc==963){
      printf("adivinaste el numero\n");
    }else{
      if(numeroc<963){
        printf("tu numero es menor al secreto\n");
      }else{
        if(numeroc>963){
          printf("tu numero es mayor\n");
        }
      }
    }
  }
  printf("desea volver a intentarlo?\n");
  printf("1)si 2)no\n);
  scanf("%i",&opc);
}
