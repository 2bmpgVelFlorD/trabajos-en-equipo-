#include <stdio.h>
int main(int argc, char const *argv[])
{
	float mul,num1,num2,x;
	printf("ingresa un numero\n");
	scanf("%f",&num1);
	printf("otro numero\n");
	scanf("%f",&num2);
	if (num2>0) {
		do {
			printf("%.f\n",num1);
			x = x+1;
		} while (x!=num2);
		mul = num1*num2;
		printf("%.f\n",mul);
	}
	return 0;
}