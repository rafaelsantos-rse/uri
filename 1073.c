#include <stdio.h>
int main(void){
  int n, i = 2;
  scanf("%d",&n);
  while(i <= n){
    printf("%d^2 = %d\n",i, (i*i));
    i+= 2;
  }

  return 0;
}