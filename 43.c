#include<stdio.h>
int main(int argc, char const *argv[/*29/04/23*/])
{ 
	float sbruto,imss,vales,fnh,sneto;int num;
	printf("ingresa el sueldo bruto");scanf("%f",&sbruto);
	printf("que quieres hacer");scanf("%i",&num);
	switch (num){
		case 1: imss=sbruto*0.08;printf("imss $%f",imss);break;
