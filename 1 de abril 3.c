#include <stdio.h>

int main (){ 
 
  for ( int N = 1 ;  N <= 10; N++) {
    printf("\n");
 }
    for (int N = 1 ;  N <= 10 ; N++) {
      for (int M = 1 ; M<=10 ; M++) {
        printf("%2d\t", N*M);
      }
    printf("\n\n");
  }
  return 0;
}

  
  