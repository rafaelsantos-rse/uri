#include <stdio.h>
int main(void){
  int n, a = 1, i = 0,j =0;
  scanf("%d",&n);
  while (i < n){
    while (j < 4){
      if(a >= 4 && a % 4 == 0){
        printf("PUM\n");
      } else{
        printf("%d ",a);
      }
      a++;
      j++;
    }
    j = 0;
    i++;
  }
  return 0;
}