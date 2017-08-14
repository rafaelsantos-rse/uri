#include <stdio.h>

int func(int n1, int n2){
  if(n1 >= n2){
    int n = ( n1 - (n1 % n2) )/ n2;
    printf("%d nota(s) de R$ %d,00\n",n,n2);
    return n1 % n2;
  } else{
    printf("0 nota(s) de R$ %d,00\n",n2);
    return n1;
  }
}

int main(void){
  int list[7], N, i = 0;
  list[0] = 100;
  list[1] = 50;
  list[2] = 20;
  list[3] = 10;
  list[4] = 5;
  list[5] = 2;
  list[6] = 1;
  scanf("%d",&N);
  printf("%d\n",N);
  while(i < 7){
    N = func(N, list[i]);
    i++;
  }
  return 0;
}