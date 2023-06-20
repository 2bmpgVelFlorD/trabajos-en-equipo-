#include<stdio.h>
void f(int *,float *);
int main (int argc,char*argv)
{
	int entero;
	float real;
	entero = 32;
	real =33.1;
	printf("antes de llamar a f entero vale %d y real vale %6.2f\n",entero,real);
	f(&entero,&real);
	printf("despues de volver de f entero vale %d y real vale %6.2f\n",entero,real);
	return 0;
}
void f(int *p,float *q)
{
	printf("al entrar en f ,*p(=entero) vale %d y *q(=real) vale %6.2f\n",*p,*q);
	*p=7777;
	*q=12345.67;
	printf("al salir de f *p vale %d y q vale %6.27\n",*p,*q);
	return ;	
}//15/06/23 11:43
