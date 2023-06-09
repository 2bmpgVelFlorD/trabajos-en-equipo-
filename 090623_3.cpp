#include <stdio.h>
int main(){
	long int n,m,fact;
	do{
		printf("\n el factorialo entre 2 y 20 ");
		scanf("%1d",&n);
	}while((n<2)||(n>20));
	for (m=n,fact=1;n>1;fact*=n--){
		printf("%1d! = %1d",m,fact);
	}
	
	
	return 0;
}
