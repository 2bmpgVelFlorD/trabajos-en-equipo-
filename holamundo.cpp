#include <stdio.h>
int main ()
{
	char palabra[]={"hola mundo"};
	
	int i, tam=sizeof(palabra) / sizeof(char *);
	
	for (i=0; i<10; ++i){
		
		 printf("%c",palabra[i]);
	}
	
	return 0;    
}
