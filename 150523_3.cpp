#include <stdio.h>

void f(int *, float *);

int main(int argc,char * argv)
{
	int entero;
	float real;
	
	entero = 22;
	real = 33.3;
	
	printf("Antes de llamar a f, entero vale %d y real vale %6.2f\n",entero,real);
	f(&entero,&real);
	printf("Despues de volver de f,entero vale %d y real vale %6.2f\n",entero,real);
	
	return 0;
}
 void f(int *p, float *q)
 {
 	printf("Al entrar en f,*p vale %d y *q vale %6.2f\n",*p,*q);
 	return;
 }
