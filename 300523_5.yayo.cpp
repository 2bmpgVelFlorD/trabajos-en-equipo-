#include <stdio.h>
int main(){
	int r=10;
	printf("valor 10\n");
	--r;
	printf("intruccion --x %i\n",r);
		--r;
	printf("intruccion --x %i\n",r);
		r--;
	printf("intruccion x-- %i\n",r);
		++r;
	printf("intruccion ++x %i\n",r);
	return 0;
}
