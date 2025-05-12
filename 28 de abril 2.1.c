#include <stdio.h>
#include <math.h>

double Areatriangulo (double a, double b, double c){
  double p = (a + b + c) /2 ;
  double area = sqrt (p * (p - a) * (p - b) * (p - c));
  return area;
}
int main() {
    double a , b , c;
   
    printf("Ingresa los lados del triangulo:\n ");
    scanf("%1f %1f %1f", &a, &b, &c);
    
    double area = Areatriangulo (a , b , c);
    printf("Area total del triangulo es: %.21f\n", area);
     return 0;
   }
    
    
    
    
    