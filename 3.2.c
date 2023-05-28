#include<stdio.h>
#include<string.h>
int main(){
  char mensaje[20];
  strcpy(mensaje,"atapuerca\n");
  /*copia un mensaje en un array de caracteres
  las dos lineas anteriores tambien se pueden sustituir
  char[20]="atapuerta\n";*/
  printf(mensaje);
  return 0;
}
