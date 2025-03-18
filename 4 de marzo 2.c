#include <stdio.h>
int main (){
  int anio;
  int sala;
  int por;
  
  printf("Ingresa tu antiguedad");
   scanf("%d",  anio);
  if(anio >=5){
    printf("Ingresa salario");
    scanf("%d", &sala);
    if((sala*100)/10 > 1000){
      printf("Felicidades,tu credito ha sido aprobado");
    }
  }
  return 0;
}
  