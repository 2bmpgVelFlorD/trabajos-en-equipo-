#include<stdio.h>
int main(){
	int c;
	scanf("%i",&c);
	switch(c)
	{
		case 0:
	    case 1:
	    case 2:printf("menor de tres.....");puts("menor de tres");break;
	    case 3:printf("igual a tres");puts("Igual a tres");break;
	    default:
	    	printf("fuera de rango");
	    	puts("Fuera de rango");break;
	}
}
