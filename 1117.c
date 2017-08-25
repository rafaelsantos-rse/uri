#include <stdio.h>
#include <math.h>
int main(void){
  int i = 0;
  float nota, media = 0;
  while (i < 2){
    scanf("%f",&nota);
    if(nota < 0 || nota > 10){
      printf("nota invalida\n");
    } else{
      media += nota;
      i++;
    }
  }
  printf("media = %.2f\n",media/i);
  return 0;
}