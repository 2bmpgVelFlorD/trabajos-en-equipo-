#include <stdio.h>
int main(int argc, char const *argv[])
{
	float m,s;
	int o;
	do{
		printf("ingrese su moneda");scanf("%i",&m);
			s+=m;
			printf("otra moneda");scanf("%i",&o);

	}while(o==0);
	printf("total %.2f",s);
	return 0;
}