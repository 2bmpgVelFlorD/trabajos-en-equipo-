#include<stdio.h>
int main()
{
	int num_elementos=3;
	int indice;
	float total=0.0;
	printf("\n \t introduce %d de numeros reales \n",num_elementos);
	for(indice=0;indice<num_elementos;indice++)
	{
		float x;
		scanf("%f",&x);
		total+=x;
	}
	printf("%f",total);
	return 0;
}
