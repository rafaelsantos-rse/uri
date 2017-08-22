#include <stdio.h>
int main(void){
  int x;
  scanf("%d",&x);
  int i = 1;
  if(x % 2 == 0){
    x--;
  }
  while (i <= x){
    printf("%d\n",i);
    i+=2;
  }

  return 0;
}