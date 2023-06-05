#include<stdio.h>
int main(){
	int car,pa,cambio;
	printf("tipo de auto");scanf("%i",&car);
	switch(car){
		case 1:printf("particular");
		scanf("%i",&pa);
		cambio=pa-500;
		printf("cambio %i",cambio);break;
		case 2:	printf("autobus");
		scanf("%i",&pa);
		cambio=pa-600;
		printf("cambio %i",cambio);break;
			case 3:printf("moto mami");
		scanf("%i",&pa);
		cambio=pa-100;
		printf("cambio %i",cambio);break;
		default:printf("fuera de alcance");break;
	}
	
	
	
	
	return 0;
}
