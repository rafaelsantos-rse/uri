#include <stdio.h>
int main(void){
  int x;
  do{
    scanf("%d",&x);
    int i = 1;
    while (i < x+1){
      if(i == x){
        printf("%d\n",i);
      } else{
        printf("%d ",i);
      }
      i++;
    }

  }while(x > 0);

  return 0;
}