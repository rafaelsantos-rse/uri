#include <stdio.h>
int main(void){
  int n;
  double sum = 0, count =   0;
  do{
  scanf("%d",&n);
  if(n >0){
    sum+=n;
    count++;
  }
  }while(n > 0);
  double average = sum/count;
  printf("%.2lf\n",average);
  return 0;
}