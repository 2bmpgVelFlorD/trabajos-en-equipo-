#include<stdio.h>
int main(){
int q,n;
	cuadrado(n);
return 0;
}
	int cuadrado(int n)
	{
	int q=0;
	while(q<=1000);
	{
		q=n*n;
		printf("el cuadrado de: %d es %d\n",n,q);
		n++;
	}
	return 0;
}
