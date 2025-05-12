#include  <stdio.h>
#include <string.h>

int main(){
  int resultado;
  
  char str1 [ ] = " ";
  printf("Ingresa str1: ");
    scanf("%s", str1);
    
  char str2 [ ] = " ";
    printf("ingresa str2: ");
    scanf("%s", str2);
    resultado = strcmp(str1, str2);
    
    
    if (resultado == 0) {
       printf("son iguales.\n");
       
    } else if (resultado > 0) {
      printf("palabra mayor es: %s\n", str2);
      printf("palabra menor es: %s\n", str1);
      
    } else {
       printf("palabra mayor es: %s\n", str1);
      printf("palabra menor es: %s\n", str2);
    }

    
    printf("su comparación es: %d\n", resultado);

    return 0;
}

  