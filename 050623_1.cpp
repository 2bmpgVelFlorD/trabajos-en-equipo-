#include<stdio.h>
int main(){
	int opcion;
	scanf("%i\n",&opcion);
	switch (opcion)
	{
    case 0:
        puts("cero");
        printf("se introdujo la viriable %i\n",opcion);
        break;
	case 1:
	    puts("uno");
	    printf("se introdujo la viriable %i\n",opcion);
	    break;
	case 2:
	    puts("dos");
	    printf("se introdujo la viriable %i\n",opcion);
	    break;
	case 3:
	    puts("tres");
	    printf("se introdujo la viriable %i\n",opcion);
	    break;
	default:
		puts("fuera de rango");
		
	}
	return 0;
