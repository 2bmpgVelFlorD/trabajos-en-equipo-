#include<stdio.h>
int main(void)
{
  char palabra[]={"papa cerdito"};
  int i, tam=sizeof(palabra)/sizeof(char *);
  for(i=0;i<tam;++i){
    printf("%c\n",palabra[i]);
  }
  printf("");
  return 0;
  
}
