#include <stdio.h>

int main() {
  int miarreglote [100];
  int i = 0;
  int mayor = 100;
  
  while (mayor >= 1) {
    miarreglote[ i ] = mayor;
    i++;
    mayor--;
  
}
i = 0;
while (i < 100) {
  printf("%d \n" , miarreglote [ i ]);
  i++;
}
    
  return 0;
}
  