#include<stdio.h>
int main(){
	char car='a';
	do{
		printf("%c",car);
		car++;
	}while(car<='z');
	
	return 0;
}
