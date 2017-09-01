#include <stdio.h>
int main(void){
  int x = 1, y, s;
  while(x != 0 && x > 0){
    scanf("%d",&x);
    s = 0;
    y = 5;
    while(y > 0){
      if(x % 2 == 0){
        s+=x;
        x+=2;
        y--;
      }
      else{
        x++;
      }
    }
    printf("%d\n",s);
  }

  return 0;
}
