#include <stdio.h>

int main() {
    int A[] = {3, 5, 6, 8, 4, 7, 8, 5, 3, 1};
    int B[] = {3, 4, 6, 8, 9, 1, 2, 3, 0, 9};

    // Operaciones
    int r1 = A[3] % (B[2] / 2);
    int r2 = B[A[1]] - A[9];
    int r3 = A[0] + A[1 + 2];
    int r4 = A[5] + B[5];
    float r5 = (float) A[3] / B[2] / 2;  
    
    // Impresion
    printf("A[3] mod (B[2] / 2) = %d\n", r1);
    printf("B[A[1]] - A[9] = %d\n", r2);
    printf("A[0] + A[1 + 2] = %d\n", r3);
    printf("A[5] + B[5] = %d\n", r4);
    printf("(A[3] / B[2]) / 2 = %.2f\n", r5);

    return 0;
}