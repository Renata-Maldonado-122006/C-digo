#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arreglo;
    int x, i;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);

    
    arreglo = (int *)malloc(x * sizeof(int));

    if (arreglo == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    
    for (i = 0; i < x; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", (arreglo + i)); // uso de apuntador
    }

    
    printf("\nElementos ingresados:\n");
    for (i = 0; i < x; i++) {
        printf("Elemento %d: %d\n", i + 1, *(arreglo + i)); // uso de apuntador
    }

    
    free(arreglo);

    return 0;
}