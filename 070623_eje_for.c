#include <stdio.h>
int main ()
{
	/* ejemplo 1*/
	int c;
	for (c = 'A'; c <= 'z'; c++) {
		printf("%c ", c);
	}
	printf("\n");
	/* ejemplo 2*/
	for (c = '9'; c >= '0'; c--){
		printf("%c ", c);
	}
	printf("\n");
	/* ejemplo 3*/
	int i;
	for (i = 1; i < 100; i *= -2){
		printf("%d ", i);
	}
	printf("\n");
	/* ejemplo 4*/
	#define MAX 25
	int j;
	for (i = 0, j = MAX; i < j; i++, j--){
			printf("%d ", (i + 2 * j));
	}
	printf("\n");
	return 0;

	
}
