#include <stdio.h>
#define TAM 6
int main(int argc, char const *argv[])
{
	int lista[TAM]={12,10,5,6,1,3};
	int temp=0;
	int i,j;
	printf("lista desordenada: \n");

for (i=0;i<TAM;i++)
	printf("%3d",lista[i]);
for (i=1;i<TAM;i++)
{
	for (j=0;j<TAM-1;j++)
	{
		if (lista[j] > lista[j+1])
		{
			temp=lista[j];
			lista[j]=lista[j++];
			lista[j++]=temp;
		} 
	}
}
printf("\nLos valores ordenados son:\n");
for (i=0,iTAM)


	return 0;
}