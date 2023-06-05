#include <stdio.h>

int main() {
    int num_blancos = 0, num_digitos = 0, num_distintos = 0;
    char c;
    
    scanf("%c", &c);
    
    switch (c) {
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            num_digitos++;
            printf("hola1 %i",num_digitos);
        case ' ': case '\t': case '\n':
            num_blancos++;
            printf("hola2 %i",num_blancos);
            break;
        default:
            num_distintos++;
            printf("hola1 %i",num_distintos);
            break;
    }
    
    return 0;
}
