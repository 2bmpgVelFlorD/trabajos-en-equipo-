#include<stdio.h>
void func1(void){
	puts("segunda funcion");
	return;
}
int func2(){
	puts("tercera funcion");
	return 0;
}
	int main()
	{
		puts("primera funcion main()");
		func1();
		func2();
		puts("ultima instruccion en el main");
		return 0;
	}
