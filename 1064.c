#include <stdio.h>

int main(void){

  int count = 0, i =0;
  float input, average = 0.0;
  
  while (i<6){

    scanf("%f",&input);

    if (input > 0){

      average += input;
      count++;
    }

    i++;
  }

  average = average/count;
  printf("%d valores positivos\n",count);
  printf("%.1f\n",average);
  return 0;
}