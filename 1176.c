#include <stdio.h>
int main(void){
 int t;
 long long int Fib(int n);
 scanf("%d",&t);
 while(t > 0){
  int n;
  scanf("%d",&n);
  printf("Fib(%d) = %lld\n",n, Fib(n));
  t--;
 }
 return 0;
}
long long int Fib(int n){
 long long int L[n+1];
 int k = 2;
 L[0] = 0;
 L[1] = 1;
 while (k < n+1){
  L[k] = L[k-1] + L[k-2];
  k++;
 }
 return L[n];
}