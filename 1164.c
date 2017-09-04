#include <stdio.h>
#include <math.h>
int main(void){
 double sqrt(double x);
 int factoring(int number, int l[]);
 int t;
 scanf("%d", &t);
 while(t >0){
  int n, count = 0, sum = 0;
  scanf("%d", &n);
  int L[n];
  int k = 0;
  while(k < n){
   L[k] = 0;
   k++;
  }
  count = factoring(n, L);
  k = 0;
  while(k < count){
   sum += L[k];
   k++;
  }
  if(sum == n){
   printf("%d eh perfeito\n", n);
  } else{
   printf("%d nao eh perfeito\n", n);
  }
  t--;
 } 
 return 0;
}
int factoring(int number, int l[]){
 int i = 1, j = 0, count = 0;
 while(i < number){
  if(number % i == 0){
   l[j] = i;
   j++;
   count++;
  }
  i++;
 }
 return count;
}
