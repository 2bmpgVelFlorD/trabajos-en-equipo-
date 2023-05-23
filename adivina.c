#include <stdio.h>
int main(int argc, char const *argv[])
{
	int w=3;
	int e;
	printf("adivina el numero");
	scanf("%I",&e);
	if (e==w)
	{
		printf("correcto");
	}
	else {
		printf("incorrecto");
	}
	return 0;
}