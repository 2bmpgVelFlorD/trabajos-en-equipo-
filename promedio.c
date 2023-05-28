#include<stdio.h>
int main(){
  float c[5];
  int a=0;
  float car=0;
  for(a=0;a<5;a++){
    printf("ingresa cant \n %d:",a+1);
    scanf("%f",&c[a]);
    car+=c[a];
    printf("\n");
  }
  printf("%.2f\n", car/5);
  return 0;
}
