#include <stdio.h>
#include <math.h>
void sortList(double a, double b, double c, double L[]){

  if(a > b && b > c){
    L[0] = a;
    L[1] = b;
    L[2] = c;

  }
  else if(a >c && c > b){
    L[0] = a;
    L[1] = c;
    L[2] = b;

  }
  else if(b > c && c > a){
    L[0] = b;
    L[1] = c;
    L[2] = a;

  }
  else if(b > a && a > c){
    L[0] = b;
    L[1] = a;
    L[2] = c;

  }
  else if(c > a && a > b){
    L[0] = c;
    L[1] = a;
    L[2] = b;

  }
  else if(c > b && b > a){
    L[0] = c;
    L[1] = b;
    L[2] = a;

  }
  else{
    if (a == b ){
      if (c > a){
        L[0] = c;
        L[1] = b;
        L[2] = a;

      }
      else if (c < a){
        L[0] = a;
        L[1] = b;
        L[2] = c;

      }

    }
    else if (b == c){
      if(a > c){
        L[0] = a;
        L[1] = b;
        L[2] = c;

      }
      else if (a < c){
        L[0] = c;
        L[1] = b;
        L[2] = a;

      }

    }
    else if (c == a){
      if (b > c){
        L[0] = b;
        L[1] = c;
        L[2] = a;
      }
      else if (b < c){
        L[0] = c;
        L[1] = a;
        L[2] = b;

      }

    }
    else if(a == b && b == c){
      L[0] = c;
      L[1] = a;
      L[2] = b;
    }
  }
}

int main(void){
  void sortList(double a, double b, double c, double L[]);
  double A, B, C, list[3];
  scanf("%lf %lf %lf",&A, &B, &C);
  sortList(A, B, C, list);
  for(int i = 2; i >= 0; i--){
    printf("%lf\n",list[i]);
  }
  return 0;
} 