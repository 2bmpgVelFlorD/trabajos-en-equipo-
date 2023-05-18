#include<stdio.h>
int main(){
 float a;
 float n;
 float x;
 printf("ingresa el numero del que desea saber sus valores\n"); 
 scanf("%s", n);
 a=1;
 while(x!=n){
  x=x+1;
  a=x;
  if (n%a==0){
   printf("%f\n", a);
  }
 
 } 
 return 0;
 
    

}
