#include<stdio.h>
int main(){
	float c,d,a,consumo,j,k;
	printf("dime dos numeros");scanf("%f%f",&j,&k);
	consumo=j-k;
	if (consumo<1000){
		c=consumo*0.9;
		printf("%f",c);
	}
	if (consumo>1000 & consumo<2500){
		d=consumo*1.9;
		printf("%f",d);
	}
	if (consumo>=2500){
		a=consumo*3;
		printf("%f",a);
	}
	
	return 0;
	
}
