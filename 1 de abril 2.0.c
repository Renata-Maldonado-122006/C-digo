#include <stdio.h>

int main (){ 
  int N=6;
 
  for ( int i = 1 ;  i <= N ; i++) {
    for (int j = 1 ;  j <= i ; j++) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n\n");
  
  for ( int i = N ;  i >= 1 ; i--) {
    for (int j = 1 ;  j <= i ; j++) {
      printf("*");
    }
    printf("\n");
  }
    
  return 0;
}

  
  