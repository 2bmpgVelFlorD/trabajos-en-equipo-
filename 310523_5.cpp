/*310523
Yahir Sanchez
titulo; */
#include<stdio.h>

int main()
{
	int n=5, t;//la variable t=0
	t=++n*--n;//la variable n tiene preincremento
	printf("n= %d, t=%d\n", n, t);//la variable n su valor es igual a 5 y la variable t su valor es igual a 0
	printf("%d %d %d\n", ++n, ++n, n++);//la variable n tiene dos preincrentos y un posincremento.
	return 0;
}
