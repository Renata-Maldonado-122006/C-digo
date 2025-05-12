#include <stdio.h>
#include <string.h>

int factorial (int n){
  if (n <= 1)
  return 1;
  return n * factorial(n - 1);
}

int main (){
  int n;
  printf("Ingresa un numero: ");
  scanf("%d", &n);
  printf("El factorial de %d es: %d\n", n ,factorial (n));
  return 0;
}
  
  
  
  
  
  