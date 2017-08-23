#include <stdio.h>
int main(void){

  int N, i = 1;
  scanf("%d",&N);
  while (i < 1000){
    if (i % N == 2){
      printf("%d\n",i);
    }
    i++;
  }
  return 0;
}