#include <stdio.h>
int main(void){
  int x, y, sum = 0;
  scanf("%d",&x);
  scanf("%d",&y);
  if(x < y){
    while(x <= y){
      if( x % 13 != 0){
        sum += x;
      }
      x++;
    }
  }
  else if(y <= x){
    while(y < x){
      if( y % 13 != 0){
        sum += y;
      }
      y++;
    }
  }
  printf("%d\n",sum);
  return 0;
}