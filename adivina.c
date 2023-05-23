#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int num;int res;
	printf("introduce un numero");scanf("%d",&num);
	if (num>100){
		printf("el numero es mayor");
	} else if (num<100){
		printf("el numero es menor");
	}else{
		printf("correcto");
	}
	return 0;
}