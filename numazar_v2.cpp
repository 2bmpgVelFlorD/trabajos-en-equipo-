#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int num; int res,valor;
	do{
		printf("introduce un numero entero\n");scanf("%i",&num);
if ((num=100)?(num<100):(num>100)){
			printf("el numero es mayor");
			printf("repetir\n");scanf("%i",&valor);
		} else if (num<100){
			printf("el numero es menor\n");printf("repetir\n");scanf("%i",&valor);
		}else{
			printf("correcto\n");printf("repetir\n");scanf("%i",&valor);		
		}
	}
while(valor !=0);printf("hasta pronto");
	return 0;
} 
