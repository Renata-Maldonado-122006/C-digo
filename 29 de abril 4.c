#include <stdio.h>
#include <string.h>

struct CD{
  char titulo [100];
  char artista [50];
  char num_canciones [100];
  char precio [100];
  char anio [100];
};

int main(void)
{
  struct CD cd1;
  printf("Ingresa el titulo\n: ");
  scanf("%s", cd1.titulo);
  printf("%s\n",cd1. titulo);
  
 
  printf("Ingresa el artista\n: ");
  scanf("%s",cd1.artista);
  printf("%s\n",cd1. artista);
  
 
  printf("Ingresa numero de canciones\n: ");
  scanf ("%s",cd1.num_canciones);
  printf("%s\n",cd1. num_canciones);
  
  
  printf("Ingresa precio\n: ");
  scanf ("%s",cd1.precio);
  printf("%s\n",cd1. precio);
  
 
  printf("Ingresa anioo\n: ");
  scanf("%s",cd1.anio);
  printf("%s\n", cd1. anio);
  return 0;
}