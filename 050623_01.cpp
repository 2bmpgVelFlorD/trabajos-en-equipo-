#include <stdio.h>
int main(){

int c;
scanf ("%i",&c);
switch(c)//se introdujo la variable
{
case 0:
	printf("cero");
    puts("cero");
	break;
case 1:
	printf("Uno");
    puts("Uno");
	break;
case 2:
	printf("Dos");
    puts("Dos");
	break;
case 3:
	printf("Tres");
    puts("Tres");
	break;
default:
    puts("Fuera de rango");	
    }
	return 0;	
}
