#include <stdio.h>
int main(void){

  int n, i = 1, g, p;
  scanf("%d",&n);
  p = 1;
  g = n;
  i++;
  while ( i < 101 ){
    scanf("%d",&n);
    if (n > g){
      g = n;
      p = i;
    }
    i++;
  }
  printf("%d\n",g);
  printf("%d\n",p);
  return 0;

}
