#include<stdio.h>
#include<stdbool.h>
intmain(){
  float a;
  float b;
  float figonacci;
  float n;
  bool suma;
  float x;
  scanf("%s",n);
  a=0;
  b=1;
  while(x!=n){
    printf("%f\n", a);
    suma=a+b==figonacci;
    a=b;
    x=x+1;
  }
  return 0;
}
