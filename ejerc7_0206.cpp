#include<stdio.h>/

int main(){

	int num;

	scanf("%i\n",&num);

	if(num>0){

		printf("tu numero es positivo %i\n",++num);

	}else{

		if(num<0){

			printf("tu numero es negativo %i\n",--num);

		}else{

			if(num=0){

				printf("tu numero es igual a 0 %i\n",num);

			}

		}

		

	}

	}
