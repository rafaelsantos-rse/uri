#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void){
  srand(time(NULL));
  int n, i = 1, g, p;
  n = rand()/100000000;
  printf("[%d] %d\n\n",i,n);
  p = 1;
  g = n;
  i++;
  while ( i < 101 ){
    n = rand()/100000000;
    printf("[%d] %d\n\n",i,n);
    if (n > g){
      g = n;
      p = i;
    }
    i++;
  }
  printf("numeros totais: %d\n",i-1);
  printf("maior deles %d\t",g);
  printf("na posicao: %d\n",p);
  return 0;

}