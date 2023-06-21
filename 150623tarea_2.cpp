#include <stdbool.h>
#include <stdio.h>

bool verificaDivision(int num1, int num2) {
    if (num2 % num1 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int numero1, numero2;
    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);
    
    bool resultado = verificaDivision(numero1, numero2);
    
    if (resultado) {
        printf("%d divide a %d\n", numero1, numero2);
    } else {
        printf("%d no divide a %d\n", numero1, numero2);
    }
    
    return 0;
}
