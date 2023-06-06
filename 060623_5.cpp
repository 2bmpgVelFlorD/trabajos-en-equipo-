#include<stdio.h //yahir
int main(){
	/*entrada de datos numericos,centinela-1*/
	int const centinela=-1;
	int suma,cuenta,nota;
	printf("Introduzca la primera nota");
	scanf("%d",&nota);
	while (nota!=centinela)
	{
		cuenta++;
		suma+=nota;
		printf("Introduzca la siguiente nota");
		scanf("%d",&nota);
	}//fin de while
}
