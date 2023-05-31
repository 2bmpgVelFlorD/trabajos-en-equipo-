#include <stdio.h>
int main(int argc, char const *argv[])
{
	float h,p,r,suma=0;
	printf("cuantos hotdogs desea llevar");scanf("%f",&h);
	printf("cuantas papas desea llevar");scanf("%f",&p);
	printf("cuantos refrescos desea llevar");scanf("%f",&r);
	suma=(h*2)+(r*7)+(p*9);
	printf("el total es %.2f",suma);
	return 0;
}