#include<stdio.h>
int q;
int resultado1;
int resultado2;
int main(){
	int a;
	a=124;q=1;
	resultado1=a+q;
	printf("r1:%d\n",resultado1);
	{
		int b;
		int resultado3;
		b=124;a=457;q=2;
		resultado2=a+q+b;
		printf("r1a:%d\n",resultado1);
		printf("r1b:%d\n",resultado2);
	{
	
		
		
		int c;
		c=124;b=457;a=788;q=3;
		resultado3=a+b+q+c;
		printf("r3:%d\n",resultado3);
		
	}
}
	return 0;
}
