#include <stdio.h>
#include <string.h>

struct CD{
  char titulo [100];
  char artista [50];
};

int main(void)
{
  struct CD cd1;
  printf("Ingresa el título\n");
  gets (cd1.titulo);
  
  printf("%s\n", cd1. titulo);
  
  return 0;
}