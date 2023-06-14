#include <stdio.h>
int main()
{
    int numero=0;
	int c,x; 
    do
    {
        printf("\nNumero ");
        scanf(" %d",&numero);
    x+=numero;
    } while(numero!=-1);
    printf("\nNumero %d",x);
    
    return 0;
}
