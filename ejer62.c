#include<stdio.h>
#include<stdlib.h>
intmain(){
  int n;
  int num;
  int rpt;
  float x;
  num=(rand()%10);
  printf("ingrese num de intentos\n");
  printf("3\n");
  printf("5\n");
  printf("indefinido=(10)\n");
  scanf("%i",&rpt);
  switch(rpt){
      case 3:
          while(x!=4 || n!=num){
            printf("solo tienes 3 oportunidades\n");
            scanf("%i",&n);
            if(n==num){
              printf("felicidades adivinaste\n");
            }
            if(n<num){
              printf("el num es mayor de %i\n",n);
            }
            if(n>num){
              printf("el numero es menor de %i\n",n);
            }
            x=x+1;    
          }
        break;
      case 5:
          while(x!=6 || n!=num){
            printf("solo tienes 5  oportunidades\n");
            scanf("%i",&n);
            if(n==num){
              printf("felicidades adivinaste\n");
            }
            if(n<num){
              printf("el num es mayor de %i\n",n);
            }
            if(n>num){
              printf("el numero es menor de %i\n",n);
            }
            x=x+1;
          }
        break;
      case 10:
          while(n!=num){
            printf("solo tienes 5 oportunidades\n");
            scanf("%i"&n);
            if(n==num){
              printf("felicidades adivinaste\n");
            }
            if(n<num){
              printf("el num es mayor de %i\n",n);
            }
            if(n>num){
              printf("el numero es menor de %i\n",n);
            }
            x=x+1;    
        
      }
      break;
      
  }
return 0;
}
