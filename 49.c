#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	printf("dime un numero");scanf("%i",&num);
	switch (num) {
	case 1:printf("enero 31 dias");break;
		case 2:printf("febrero 28 dias");break;
			case  3:printf("marzo 31 dias");break;
				case 4:printf("abril 30 dias");break;
					case  5:printf("mayo 31 dias");break;
						case  6:printf("junio 30 dias");break;
							case  7:printf("julio 31 dias");break;
								case  8:printf("agosto 31 dias");break;
									case  9:printf("septiembre 30 dias");break;
										case 10:printf("octubre 31 dias");break;
											case  11:printf("noviembre 30 dias ");break;
												case 12:printf("diciembre 31 dias");break;
		                                         default:printf("Error1");
	return 0;
}