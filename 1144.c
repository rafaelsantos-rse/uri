#include <stdio.h>

int main(void){
  int i = 1, n;
  scanf("%d",&n);
  while(i <= n){
    printf("%d %d %d\n",i,i*i, i*i*i);
    printf("%d %d %d\n",i,i*i + 1, i*i*i + 1);
    i++;
  }
  return 0;
}