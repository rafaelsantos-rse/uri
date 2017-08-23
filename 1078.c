#include <stdio.h>
int main(void){
  int N, i = 1;
  scanf("%d",&N);
  while (i < 11){
    printf("%d x %d = %d\n",i,N,(i*N));
    i++;
  }

  return 0;
