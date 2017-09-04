#include <stdio.h>
int main(void){
  int a =  100, i, s, led, n;
  char number[a];
  scanf("%d",&n);
  while(n > 0){
    scanf("%s",number);
    led = 0;
    i = 0;
    while (i < a){
      switch(number[i]){
        case '0':
          s = 6;
          break;
        case '1':
          s = 2;
          break;
        case '2':
          s = 5;
          break;
        case '3':
          s = 5;
          break;
        case '4':
          s = 4;
          break;
        case '5':
          s = 5;
          break;
        case '6':
          s = 6;
          break;
        case '7':
          s = 3;
          break;
        case '8':
          s = 7;
          break;
        case '9':
          s = 6;
          break;
        default:
          s = 0; 
          break;
      }
      led += s;
      i++;
    }
    printf("%d leds\n",led);
    n--;
  }
  return 0;
}