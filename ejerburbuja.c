#include<stdio.h>
main(){
  int vector[10]={10,4,67,24,6,25,7,100};
  int aux;
  for (int i = 0 ; i < 10 ; i++){
    for (int j = 0 ; j < 10 ; j++){
      if(vector[j] > vector[j+1]){
        aux = vector [j+1];
        vector[j+1] = vector[j];
        vector[j] = aux;
      }
    }
  }
  for(int i = 0; i < 10; i++){
    printf("%d\t", vector[i]);
  }
  return 0;
}

  
        
