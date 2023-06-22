#include<stdio.h>
#include<conio.h>
#include<string.h>
int edad,sexo,diaentrada,fechanac,medicamento,hora,opc; 
int datosid(){
	char nom[30];
	char med[30];
	printf("ingrese datos basicos del paciente:\n");
	printf("codigo del paciente:\n");
	scanf("%s\n",&nom);
	printf("dia de entrada:\n");
	scanf("%i\n",&diaentrada);
	printf("fecha de nacimiento:\n");
	scanf("%i\n",&fechanac);
	printf("sexo del paciente 1)masculino 2)femenino\n");
	scanf("%i\n",&sexo);
	printf("ingrese dosis (ml o pastillas)\n");
	scanf("%s\n",&med);
	printf("ingrese tiempo (hrs) en que se debe tomar el medicamento\n");
	scanf("%d\n",&medicamento);
	printf("confirme tiempo (hrs) en que se debe tomar el medicamento (nota: en caso de que sea diferente, se tomara como referencia el primer dato ingresado)\n");
	scanf("%i\n",&hora);
	printf("ingrese la altura del paciente: \n");
	int altura;
	scanf("%d\n",&altura);
	printf("ingrese peso del paciente: \n");
	int peso;
	scanf("%i\n",&peso);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	int x=x+1;
	int cuarto=cuarto+1;
	printf("                 HOSPITAL ALCHEMILLA                           \n");
	printf("       Datos Basicos y de Control del Paciente.        \n");
	printf("datos del paciente: %i\n",x);
	printf("codigo: %i\n",nom);
	printf("dia de entrada: %i\n",diaentrada);
	printf("fecha de nacimiento: %i\n", fechanac);
	printf("genero del paciente: 1)masculino 2)femenino: %i\n",sexo);
	printf("cuarto: %i\n",cuarto);
	printf("medicamento: %i\n",med);
	printf("dosis: %i\n",medicamento);
	printf("horas: %i\n",hora);
	printf("peso: %d\n",peso);
	printf("altura: %d\n",altura);
	int IMC;
	IMC=peso/(altura*altura);
	printf("IMC: %i\n",IMC);
	if(IMC<18.5){
		printf("paciente sufre de insudiciencia ponderal");
	}else{
		if(IMC=18.5||24.9){
			printf("paciente en intervalo normal");
		}else{
			if(IMC>25.0){
				printf("paciente con sobrepeso");
			}else{
				if(IMC=25.0||29.9){
					printf("paciente sufre de pre obesidad");
				}else{
					if(IMC>30){
						printf("paciente con obesidad");
					}
				}
			}
		}
	}
	getch();
	return 0;
}

int horario(){
	int dia;
	int x=x+1;
	printf("ingrese dia el cual el paciente tiene rutina agendada\n");
	printf("1)Lunes.\n");
	printf("2)Martes.\n");
	printf("3)Miercoles.\n");
	printf("4)Jueves.\n");
	printf("5)Viernes.\n");
	printf("6)Sabado.\n");
	printf("7)Domingo.\n");
	scanf("%i\n",&dia);
	printf("                                 HOSPITAL ALCHEMILLA                           \n");
   	printf("                            Rutina Agendada Del Paciente %i.        \n",x);
   	printf("NOTA:la toma de medicamentos se debe realizar en su debida hora, ya anotada en DBCP.\n");
   	printf("En caso de coincidir con alguna actividad, estrictamente se realizara la actividad o toma de medicamentos, de acuerdo a la situacion del paciente.\n");
	switch(dia){
		case 1:
			printf("paciente %i\n",x);
			printf("6:00-7:30  ");
			printf("Registro de signos vitales.\n");
			printf("9:00-10:30  ");
			printf("Chequeo breve.\n");
			printf("13:00-14:00  ");
			printf("Comida.\n");
			printf("18:00-19:00  ");
			printf("Chequeo breve.\n");
			printf("21:30-22:30  ");
			printf("Baño\n");
			printf("23:00-24:00  ");
			printf("Cena\n");
			break;
		case 2:
			printf("paciente %i\n",x);
			printf("6:00-7:30  ");
			printf("desayuno.\n");
			printf("9:00-10:00  ");
			printf("Chequeo breve.\n");
			printf("13:00-14:00  ");
			printf("Revision medica profunda.\n");
			printf("23:00-24:00  ");
			printf("Cena\n");
			break;
		case 3:
			printf("paciente %i\n",x);
			printf("9:00-10:30  ");
			printf("Estudios de sangre.\n");
			printf("9:00-10:30  ");
			printf("Chequeo breve.\n");
			printf("13:00-14:00  ");
			printf("Comida.");
			printf("19:00-20:00  ");
			printf("Chequeo breve.\n");
			printf("21:00-21:30  ");
			printf("Baño.\n");
			printf("23:00-24:00  ");
			printf("Cena\n");
			break;
		case 4:
			printf("paciente %i\n",x);
			printf("6:00-7:30  ");
			printf("Registro de signos vitales.\n");
			printf("9:00-10:30  ");
			printf("Chequeo breve.\n");
			printf("13:00-14:00  ");
			printf("Estudios de sangre.");
			printf("18:00-19:00  ");
			printf("Chequeo breve.\n");
			printf("21:30-22:30  ");
			printf("Baño.\n");
			printf("23:00-24:00  ");
			printf("Cena\n");
			break;
		case 5:
			printf("paciente %i\n",x);
			printf("6:00-7:30  ");
			printf("Registro de signos vitales.\n");
			printf("9:00-10:30  ");
			printf("Chequeo breve.\n");
			printf("13:00-14:00  ");
			printf("comida.");
			printf("18:00-19:00  ");
			printf("Registro de signos vitales.\n");
			printf("21:30-22:30  ");
			printf("Baño\n");
			printf("23:00-24:00  ");
			printf("Cena\n");
			break;
		case 6:
			printf("paciente %i\n",x);
			printf("6:30-7:30  ");
			printf("Registro de signos vitales.\n");
			printf("8:00-9:00  ");
			printf("Chequeo breve.\n");
			printf("11:00-11:30  ");
			printf("comida.");
			printf("18:00-19:00  ");
			printf("Revision medica profunda.\n");
			printf("20:00-20:30  ");
			printf("Registro de signos vitales\n");
			printf("21:30-22:30  ");
			printf("Baño\n");
			printf("23:00-24:00  ");
			printf("Cena\n");
			break;
		case 7:
			printf("paciente %i\n",x);
			printf("9:00-10:30  ");
			printf("Chequeo breve.\n");
			printf("13:00-14:00  ");
			printf("Estudios de sangre.\n");
			printf("15:00-16:00  ");
			printf("Chequeo breve.\n");
			printf("18:00-19:00  ");
			printf("Comida.\n");
			printf("21:30-22:30  ");
			printf("Baño\n");
			printf("23:00-24:00  ");
			printf("Cena\n");
			break;
	    default:
	    	printf("NO HAY RUTINA AGENDADA PARA EL PACIENTE\n");
	    	
	}
	
}
int main(){
	printf("                 HOSPITAL ALCHEMILLA                           \n");
	printf("   bienvenido al centro de control del hospital alchemilla.    \n");
	printf("\n");
	printf("MENU DE OPERACIONES INDIVIDUALES DEL PACIENTE:\n");
	printf("Que operacion desea realizar?\n");
	printf("1) Ingresar datos de paciente.\n");
	printf("2) horario del paciente.\n");
	scanf("%i\n",&opc);
	
	switch(opc){
	case 1:
		datosid();
		break;
	case 2:
		horario();
		break;
	default:
		printf("Paciente no identificado, favor de volver al menu e ingresar datos del paciente");
	
		
	}
 
	return 0;
}
