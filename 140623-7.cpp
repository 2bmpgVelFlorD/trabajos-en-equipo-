#include<stdio.h>

void func1(void){

	puts("segunda funcion");	return ;

}

int func2(){

	puts("tercera funcion");

	return 0;

}

int main(){

	puts("Primera funcion main");

func1();

func2();

puts("Ultima instruccion en main");

return 0;

}
