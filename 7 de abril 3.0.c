#include<stdio.h>
#include<string.h>

int main(){
  char palabra [20];
  int longitud;
  
  printf("Introduce una palabra ");
  scanf("%s", palabra);
  
  longitud = strlen (palabra);
  
  for (int i = 0; i < longitud; i++){
  for (int j = 0; j < longitud; j++){
  printf("*");
}
  printf("\n");
}
  return 0;
}
  