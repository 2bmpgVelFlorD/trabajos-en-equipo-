#include<stdio.h>
int main (){
	const int luna=238857;
	float luna_kilo;/*distancia en millas*/
	printf("distancia a la luna %d millas\n",luna);
	luna_kilo=luna*1.609;/*equivalencia de 1 milla en KM*/
	printf("en km es %.2fkm.\n",luna_kilo);
	return 0;
}
