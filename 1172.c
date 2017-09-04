#include <stdio.h>
int main(void){
  int arr[10], i = 0;
  while (i<10){
    scanf("%d",&arr[i]);
    if(arr[i] <=0){
      arr[i] = 1;
    }
    i++;
  }
  i = 0;
  while (i<10){
    printf("X[%d] = %d\n",i,arr[i]);
    i++;
  }
  return 0;
}