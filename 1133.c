#include <stdio.h>
int main(void){
  int x, y;
  scanf("%d",&x);
  scanf("%d",&y);
  if(x < y){
    x++;
    while(x < y){
      if(x % 5 == 2 || x % 5 == 3){
        printf("%d\n",x);
      }
      x++;
    }
  }
  else if(x > y){
    y++;
    while(y < x){
      if(y % 5 == 2 || y % 5 == 3){
        printf("%d\n",y);
      }
      y++;
    }
  }
  return 0;
}