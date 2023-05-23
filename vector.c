#include <stdio.h>
int main()
{
	int t,i;
	int num [3][4];
	for (t=0; t<3; ++t);
	    for (i=0; 1<4; ++i);
	        num[t][i]= (t*4)+i+1;
    for (t=0; t<3; ++t)
		{
			for (i=0; i<4; ++i)
			 printf("%d",num[t][i]);
			  printf("\n");
	}
  return 0;
}
