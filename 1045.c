#include <stdio.h>

int main(void){
  double A, B, C, Arr[3];
  sort(A, B, C, Arr);
  A  = Arr[2];
  B = Arr[1];
  C = Arr[0];
  printf("A = %lf B = %lf C = %lf\n",A,B,C);
  if (A >= B + C){
    printf("NAO FORMA TRIANGULO\n");
  }
  else{
    if (A*A == B*B + C*C){
      printf("TRIANGULO RETANGULO\n");
    }
    if (A*A < B*B + C*C){
      printf("TRIANGULO ACUTANGULO\n");
    }
    if (A*A > B*B + C*C){
      printf("TRIANGULO OBTUSANGULO\n");
    }
    if (A == B && A == C){
      printf("TRIANGULO EQUILATERO\n");
    }
    if (A == B || B == C || C == A){
      printf("TRIANGULO ISOSCELES\n");
    }
  }
  return 0;
}

void sort(float a, float b, float c, float L[]){
  if(a < b && a < c){
    if(b < c){
      L[0] == 
    }
    else if(c < b){

    }
    else if(c == b){

    }
  }
}