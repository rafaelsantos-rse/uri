#include <stdio.h>
int main(void){
  int T, PA, PB, year;
  float GA, GB;
  scanf("%d",&T);
  while(T > 0){
    year = 0;
    scanf("%d %d %f %f",&PA,&PB,&GA,&GB);
    while(PA <= PB){
    PA += PA*GA/100;
    PB += PB*GB/100;
    year++;
  }
  if (year <= 100){
    printf("%d anos.\n",year);
  } else{
    printf("Mais de 1 seculo.\n");
  }
  T--;
  }


	return 0;
}