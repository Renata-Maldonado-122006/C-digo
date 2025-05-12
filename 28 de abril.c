#include <stdio.h>
#include <math.h>

float promedio (float a,float b, float c);
int main (){
  
  float a=5, float b=10 , prom;
  prom=promedio (a,b);
  printf("El promedio es:%2.1 f\n", prom);
   return 0;
 }
     
     float promedio (float a, float b){
       float prom;
       a= a + 3;
       b= b+ 3;
       prom = (a + b) 2;
       return prom,/