/*KEVIN RICARDO 2BMPG*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	float sbruto,imss,vales,fnh,sneto;int num;
	printf("ingresa el sueldo bruto");scanf("%f",&sbruto);
	printf("que quieres hacer");scanf("%i",&num);
	switch (num){
	case 1:imss=sbruto*0.08;printf("imss $%.2f",imss);break;
	case 2:vales=sbruto*0.10;printf("vales $%.2f",vales);break;
	case 3:fnh=sbruto*0.13;printf("fondo de ahorro $%.2f",fnh);break;
	case 4:sneto=sbruto-(sbruto*0.08)-(sbruto*0.10)+(sbruto*0.13);printf("sueldo neto $%.2f",sneto);break; 
	default:printf("error");break;
	}
	return 0;
}
