#include<stdio.h>
int main(int argc, char const *argv[])
{	float p;
	float p1;
	float x;
	do {
		p1 = p1+1;
		p = 4+p1;
		printf("%.f\n",p);
		x = x+1;
	} while (x!=30);

	return 0;
}