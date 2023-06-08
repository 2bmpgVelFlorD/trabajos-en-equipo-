#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador;
    int continuar;

    do {
        printf("número:1 ");
        scanf("%f", &num1);

        printf("número:2 ");
        scanf("%f", &num2);

        printf("que operacion quiere hacer  (+, -, *, /): ");
        scanf(" %c", &operador);

        switch (operador) {
            case '+':
                resultado = num1 + num2;
                printf("La suma es: %.2f\n", resultado);
                break;
            case '-':
                resultado = num1 - num2;
                printf("La resta es: %.2f\n", resultado);
                break;
            case '*':
                resultado = num1 * num2;
                printf("La multiplicación es: %.2f\n", resultado);
                break;
            case '/':
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("La división es: %.2f\n", resultado);
                } else {
                    printf("Error: No se puede dividir entre cero.\n");
                }
                break;
            default:
                printf("Error: Operador inválido.\n");
        }

        printf("¿Desea realizar otra operación? (1 = Sí, 0 = No): ");
        scanf("%d", &continuar);

        printf("\n");

    } while (continuar == 1);

    printf("¡Gracias por usar el programa!\n");

    return 0;
}
