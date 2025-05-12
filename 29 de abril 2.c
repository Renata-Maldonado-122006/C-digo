#include <stdio.h>
#include <math.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int numero;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El número debe ser positivo.\n");
    } else {
        long long resultado = factorial(numero);
        printf("El factorial de %d es: %lld\n", numero, resultado);
    }

    return 0;
}