

#include <stdio.h>

int main() {
   int n = 50, i, suma = 0;

   for (i = 1; i <= n; i++) {
   	printf("%i\n",i);
      suma += i;
   }

   printf("La suma de los primeros %d enteros es: %d\n", n, suma);
   return 0;
}
