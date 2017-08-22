#include <stdio.h>
int main(void){
  int x, y, average = 0;
  scanf("%d",&x);
  scanf("%d",&y);
  if (y > x){
    x++;
    while (x < y){
      if(x % 2 != 0){
        average += x;
      }
      x++;
    }
  }
  else if(x > y){
    y++;
    while (y < x){
      if(y % 2 != 0){
        average += y;
      }
      y++;
    }
  }
  else{
    average = 0;
  }
  printf("%d\n",average);

  return 0;
}