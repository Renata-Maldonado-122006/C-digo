#include <stdio.h>

int main() {
    int numero = 1; 
    printf("Número\tCuadrado\tCubo\n");
    

    
    while (numero <= 500) {
        printf("%d\t%d\t\t%d\n", numero, numero * numero, numero * numero * numero);
        numero++; 
    }

    return 0;
}