/*kevin ricardo*/
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int conn,num;
	printf("ingresa un numero");scanf("i",&num);
	conn=0;
	do{
		num=(num/10);
		++conn;
	} while (num!=0);
	printf("%i",conn);
	return 0;
}