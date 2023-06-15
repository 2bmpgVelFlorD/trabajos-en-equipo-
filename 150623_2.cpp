#include <stdio.h>
void f(int p, float q)
{
	printf("Al entrar en f,p (=entero) vale %d y q (=real) vale &6.2f\n",p,q);
	
	p= 7777;
	q = 12345.67;
	
	printf("Al salir de f, p vale %d y q vale %6.2f\n",p,q);
	return ;
}


int main(int argc, char *argv)
{
	int entero;
	float real;
	
	entero = 22;
	real = 33.3;
	
	printf("Antes de llamar a f, entero vale %d y real vale %6.2f\n",entero,real);
	f(entero,real);
	printf("Despues de volver  de f,entero vale %d y real vale %6.2f\n",entero,real);
	
	return 0;
}
