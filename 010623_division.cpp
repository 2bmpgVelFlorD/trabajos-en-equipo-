#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    if (num2 != 0) {
        if (num1 % num2 == 0) {
            printf("%d es divisible por %d\n", num1, num2);
        } else {
            int residuo = num1 % num2;
            printf("%d no es divisible por %d. El residuo es %d\n", num1, num2, residuo);
        }
    } else {
        printf("No se puede dividir entre cero\n");
    }

    return 0;
}
