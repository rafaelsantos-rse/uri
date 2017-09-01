/*
WRONG PROGRAM
#include <stdio.h>
int main(void){
  int n, x, y;
  scanf("%d",&n);
  while(n > 0){
    scanf("%d %d",&x, &y);
    while(y > 0){
      if(x % 2 != 0){
        printf("%d\n",x);
        x+=2;
        y--;
      }
      else{
        x++;
      }
    }
    n--;
  }

  return 0;
}
*/
#include <stdio.h>
int main(void){
  int n, x, y, s = 0;
  scanf("%d",&n);
  while(n > 0){
    scanf("%d %d",&x, &y);
    s = 0;
    while(y > 0){
      if(x % 2 != 0){
        s+=x;
        x+=2;
        y--;
      }
      else{
        x++;
      }
    }
    printf("%d\n",s);
    n--;
  }

  return 0;
}