#include <stdio.h>
int main(void){
  int x, y, i = 1;
  scanf("%d %d",&x, &y);
  while(i < y+1){
    if(i >= x && i % x == 0){
      printf("%d\n",i);
    }
    else if(i == y){
      printf("%d\n",i);
    } 
    else{
      printf("%d ",i);
    }
    i++;
  }
  return 0;
}