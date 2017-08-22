#include <stdio.h>
int main(void){
  int x;
  scanf("%d",&x);
  int i = 0;
  if(x % 2 == 0){
    x++;
  }
  while (i < 6){
    printf("%d\n",x);
    x += 2;
    i++;
  }

  return 0;
}