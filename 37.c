/*KEVIN RICARDO 2BMPG*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int numero;
	printf("presiona el numero 1");scanf("%i",numero);
	switch(numero){
	case 1: 
	case 2:printf("digito 1-2");break;
	default:printf("error");
	}
	return 0;
}