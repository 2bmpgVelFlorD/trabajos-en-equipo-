#include<stdio.h>
#include<stdarg.h>
void f(int*,float*);
int main(int argc,char*argv){
	int entero;
	float real;
	entero=22;
	real=33.3;
	printf("antes de llamar a f, entero vale %d y real vale %6.2f\n", entero,real);
	f(&entero,&real);
	printf("despues de volver de f, en tero vale %d y ral vale %6.2f\n",entero,real);
	return 0;
}
void f(int*p,float*q){
	printf("al entrar a f, *p(=entero) vale %d y *q (=real) vale %6.2f\n",*p,*q);
	*p=7777;
	*q=12345.67;
	printf("al salir de f, *p vale %d %d y *q vale %6.2f\n",*p,*q);
	return 0;
}
