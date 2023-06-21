#include<math.h>
int main(){
	int exponente;
	double d,y;
	printf("\n ceil (3.7)= %lf \t\t ceil (3.4)= %lf",ceil(3.7),ceil(3.4));
	printf("\n ceil (-3.7)= %lf \t\t ceil (-3.4)= %lf",ceil(-3.7),ceil(-3.4));
	printf("\n floor (3.7)= %lf \t\t floor (3.4)= %lf",floor(3.7),floor(3.4));
	printf("\n floor (-3.7)= %lf \t\t floor (-3.4)= %lf",floor(-3.7),floor(-3.4));
	printf("\n fmod (5.6,2.5)= %lf \t\t fmod (-5.6,2.5)= %lf",fmod(5.6,2.5),fmod(-5.6,2.5));
	d=frexp(16.0,&exponente);
	d=modf(-17.365,&y);
	printf("\n parte decimal de -17.365= %lf",d);
	printf("\n parte entera de -17.365= %lf",y);
	return 0;
}
