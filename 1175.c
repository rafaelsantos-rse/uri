#include <stdio.h>
int main(void){
  int N[20], i;
  i = 19;
  while (i >= 0){
    scanf("%d",&N[i]);
    i--;
  }
  i = 0;
  while (i < 20){
    printf("N[%d] = %d\n",i,N[i]);
    i++;
  }

	return 0;
}