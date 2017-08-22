#include <stdio.h>
int main(void){

  int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;
  int i = 0;
  int n;
  while (i < 5){
    scanf("%d",&n);
    if (n % 2 == 0){
      evenCount++;
    } else{
      oddCount++;
    }
    if (n > 0){
      positiveCount++;
    } else if ( n < 0){
      negativeCount++;
    }
    i++;
  }
  printf("%d valor(es) par(es)\n",evenCount);
  printf("%d valor(es) impar(es)\n",oddCount);
  printf("%d valor(es) positivo(s)\n",positiveCount);
  printf("%d valor(es) negativo(s)\n",negativeCount);

  return 0;
}