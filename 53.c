#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	float n,p,t;
	printf("dime un numero y potencia");scanf("%f %f",&n,&p);
	t=pow(n,p);
	printf("total %.f",t);
	return 0;
}