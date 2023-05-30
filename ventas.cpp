#include<stdio.h>
int main (){
	int ventas=1000;
	int anos=8;
	int sal_min=1000;
	int iva=15;
if(ventas<sal_min *3 &&anos >10*iva){
	printf("la condicion se cumple\n");
	} else {
		printf (" la condicion no se cumple");
	}
}
