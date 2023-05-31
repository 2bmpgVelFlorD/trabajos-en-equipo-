/*310523
yahir sanchez
titulo; */
#include<stdio.h>

int main()
{
	int n=5, t;
	t=++n*--n;
	printf("n= %d, t=%d\n", n, t);
	printf("%d %d %d\n", ++n, ++n, n++);
	return 0;
}
