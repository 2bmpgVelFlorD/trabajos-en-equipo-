#include<stdio.h>
int main(){
	int digito_leido=0;
	char car;
	while(!digito_leido){
		printf("\nintroduzca un caracter\n");
		scanf("%c",&car);
		digito_leido=(('0'<=car))&&(('9'<=car));
	}
}
