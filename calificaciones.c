#include<stdio.h>
int sumarcalf(int calificaciones[]){
  int suma=0
    for(int i=0;i<5;i++){
      suma+=calificaciones[i]{
    }
      return suma;
    }
  void mostrarresultado(int suma){
    printf("la suma de las calificaciones es: %d\n", suma);
  }
}
int main(){
int calificaciones[5];
  printf("ingrese las 5 calf de los alumnos\n");
  for(int i=0;i<5;++i){
    printf("alumno %d:", i+1);
    scanf("%d", &calificaciones[i]);
  }
  int suma=sumarcalf(calificaciones);
  mostrarresultado(suma);
  return 0;
  
}
