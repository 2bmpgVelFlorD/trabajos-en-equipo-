#include <stdio.h>//cabecera
#include <math.h>//cabecera
int main(){
	float f,x;
	printf("\n elige un valor de x:");//pide i dato
	scanf("%f", &x);//lee y guarda un valor
	/*seleccion del rango donde se encuentra*/
	if(x<=0.0)//asigna 0 a x
	f=-pow(x, 2)-x;//x se eleva a la potencia 2
	else
	f=-pow(x, 2)+3*x;//eleva a la potencia 2 y suma 3 y multiplica por 3
	printf("f(%.1f)=%.3f", x, f);//imprime los valores
	return 0;
	
}
