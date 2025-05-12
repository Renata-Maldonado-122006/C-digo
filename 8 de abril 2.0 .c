#include<stdio.h>
#include<string.h>

int main(){
  int len;
  char palabra1 [10] = "Gira";
  char palabra2 [10] = "Sol";
  char despues [20];
 
  scanf("%s", &palabra1);
  
  scanf("%s", &palabra2);
  
  strcpy(despues, palabra1);
  strcpy(palabra1, palabra2);
  
  printf("%s %s", palabra2, despues);
  printf("%s %s", palabra1,despues);
  
  
  return 0;
}

