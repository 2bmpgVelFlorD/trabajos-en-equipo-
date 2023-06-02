#include<stdio.h>//yahir
int main(){
	float x;
	printf("ingrese un numero\n");
	puts("ingrese un numero ");
	scanf("%f",&x);
	if (x>0){
		printf("el numero es mayor a cero %.f\n",++x);
		puts("el numero es mayor a 0");
	}else
	{
		printf("el numero es menor a 0 %.f\n",--x);
		puts("el numero es menor a 0");
	}
	
	return 0;
}
