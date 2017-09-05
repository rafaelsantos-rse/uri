#include <stdio.h>
int main(void){
 int n, i = 0, small;
 scanf("%d",&n);
 int x[n];
 while(i < n){
  scanf("%d",&x[i]);
  if(i == 0){
   small = i;
  }
  else if(x[i] < x[small]){
   small = i;

  }
  i++;
 }
 printf("Menor valor: %d\n",x[small]);
 printf("Posicao: %d\n",small);
 return 0;
}