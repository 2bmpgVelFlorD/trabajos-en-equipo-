#include<stdio.h>
#include<ctype.h>
int main(){
	char resp;
	char c;
	printf("es masculino o femenino (m/f)? ");
	scanf("%c",&resp);
	resp= toupper(resp);
	switch(resp){
	case 'M':
			puts("e un enfermero");
			break;
    case 'F':
	        puts("hola enfermera");
			break;
	default:
	    	puts("es un enfermo");
	    	break;
	}
	return 0;
}
