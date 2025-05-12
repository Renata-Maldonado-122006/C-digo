#include <stdio.h>
#include <math.h>

double Area triangulo (double a, double b, double c){
  double p = (a + b + c) /2.0;
  double area = sqrt (p * (p - a) * (p - b) * (p - c));
  return area;
  
int main() {
    double a,b,c;
   
    printf("Ingresa los lados del triangulo:\n ");
    scanf("%1f, %1f, %1f", &a, &b, &c);
    } else if (resultado > 0) {
      printf("palabra mayor es: %s\n", segundo);
      printf("palabra menor es: %s\n", primero);
    } else {
       printf("palabra mayor es: %s\n", segundo);
      printf("palabra menor es: %s\n", primero);
    }

    
    printf("su comparación es: %d\n", resultado);

    return 0;
}