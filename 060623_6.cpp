include<stdio.h>
int main (){
	int num_de_elementos, cuenta, calorias_por_alimentos, calorias_total;
	printf("cuantos alimentos ha comido hoy");
	scanf("%d", &num_de_elementos);
	calorias_total=0;
	cuenta=1;
	printf("intruducir el numero de calorias de cada uno de los \n");
	printf("%d %s\n", num_de_elementos,"alimentos tomados:");
	while(cuenta++<= num_de_elementos);
	{
		scanf("%d", &calorias_por_alimentos);
		calorias_total+= calorias_por_alimentos;
	}
	printf("las calorias totales consumidas hoy son= \n");
	printf("%d\n", calorias_total);
	return 0;
}
