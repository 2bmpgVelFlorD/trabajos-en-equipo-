#include<stdio.h>

int main(){

	float acum,num=0,media;	int contador=0;

	while(contador!=6){

		contador++;

		scanf("%f",&num);

		acum+=num;

		media=acum/6;

	}

	printf("valores:%f\n",media);

}
