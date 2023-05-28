#include<stdio.h>
int main(int argc, char const *argv[])
{
  int a[10]={10,1,2,3,100,10000,200,7,1,0};
  int mayor=0;
  int p;
  int pp;
  for(p=0;p<10;++p){
    for(pp=0;pp<10;++pp){
      if(p[a]>mayor){
        mayor=p[a];
      }
    }
  }
  printf("el numero mayor es %d\n", mayor);
  return 0;
}
