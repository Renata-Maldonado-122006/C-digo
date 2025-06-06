#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);

    
    char *arreglo = (char *)malloc(x * sizeof(char));

    printf("Ingrese %d letras:\n", x);
    for (int i = 0; i < x; i++) {
        printf("Letra %d: ", i + 1);
        
        getchar();
        scanf("%c", &arreglo[i]);
    }

    
    printf("Arreglo en orden inverso:\n");
    for (int i = x - 1; i >= 0; i--) {
        printf("%c ", *(arreglo + i));
    }
    printf("\n");

    free(arreglo);
    return 0;
}#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);

    
    char *arreglo = (char *)malloc(x * sizeof(char));

    printf("Ingrese %d letras:\n", x);
    for (int i = 0; i < x; i++) {
        printf("Letra %d: ", i + 1);
        
        getchar();
        scanf("%c", &arreglo[i]);
    }

    
    printf("Arreglo en orden inverso:\n");
    for (int i = x - 1; i >= 0; i--) {
        printf("%c ", *(arreglo + i));
    }
    printf("\n");

    free(arreglo);
    return 0;
}