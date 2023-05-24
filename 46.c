#include <stdio.h>
int main(int argc, char const *argv[])
{
	float m,s=0;
	int o;
	do{
		printf("ingrese su moneda");scanf("%f",&m);
			s+=m;
			printf("otra moneda si 0 no 1 ");scanf("%i",&o);

	}while(o==0);
	printf("total %.2f",s);
	return 0;
}