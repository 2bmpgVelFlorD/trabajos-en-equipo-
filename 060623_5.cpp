#include<stdio.h>
int main (){
	/*entrada de datos numericos */
	int const centinela=-1;
	int suma,cuenta,nota;
	printf("introduce la primera nota");
	scanf("%d",&nota);
	while(nota!=centinela){
		cuenta++;
		suma+=nota;
		printf("introduce la siguiente nota");
		scanf("%d",&nota);
	}//fin while
	
	
	return 0;
}
