#include <stdio.h>
#include <math.h>
int main(void){
  int i = 0,c = 1;
  float nota, media = 0;
  while (c == 1){
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
    printf("novo calculo(1-sim 2-nao)\n");
    scanf("%d",&c);
    i = 0;
    media = 0;
  }
  return 0;
}