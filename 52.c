#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,num1,smt;
	printf("dime un numero");scanf("%i",&n);
	for (int x = 1; x<=n; ++x)
	{
	scanf("%i",&num1);
	smt=smt+num1;
	}
	printf("%i",smt);
	return 0;
}