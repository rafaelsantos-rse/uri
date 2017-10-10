#include <stdio.h>

int main(void){
  double l[6];
  int i = 0, positives = 0;
  scanf("%lf %lf %lf %lf %lf %lf",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5]);
  while (i < 6){
    if (l[i] > 0){
      positives++;
    }
    i++;
  }
  printf("%d valores positivos\n",positives);
  return 0;
}