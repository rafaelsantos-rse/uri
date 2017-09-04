#include <stdio.h>
int main(void){
 
 int module(float number);
 double decimal(float number);
 float decompose_coins(float number);
 float decompose_notes(float number);
 double two_decimals(double decimal);

 float value;
 double dec;
  
 scanf("%f",&value);

 dec = two_decimals(decimal(value));
 value = module(value);
 value = decompose_notes(value);
 value += dec;
 value = decompose_coins(value);


 return 0;
}

int module(float number){
 int count = 0;
 while (number >= 1){
  number--;
  count++;
 }
 return count;
}

double decimal(float number){
  int module(float number);
  int mod = module(number);
  return number - mod;
}
double two_decimals(double decimal){
 double d = decimal;
 while(d >0.09){
  d -= 0.1;
 }
 while(d > 0.009){
  d-= 0.01;
 }
 if(d >= 0.005){
  decimal -= d + 0.01;
  return decimal;
 } else{
  decimal -= d;
  return decimal;
 }
}

float decompose_notes(float number){
 int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;
 while(number >= 100){
  number -= 100;
  n100++;
 }
 while(number >= 50){
  number -= 50;
  n50++;
 }
 while(number >=20){
  number -= 20;
  n20++;
 }
 while(number >=10){
  number -= 10;
  n10++;
 }
 while(number >=5){
  number -= 5;
  n5++;
 }
 while(number >=2){
  number -= 2;
  n2++;
 }
 printf("NOTAS:\n");
 printf("%d nota(s) de R$ 100.00\n",n100);
 printf("%d nota(s) de R$ 50.00\n",n50);
 printf("%d nota(s) de R$ 20.00\n",n20);
 printf("%d nota(s) de R$ 10.00\n",n10);
 printf("%d nota(s) de R$ 5.00\n",n5);
 printf("%d nota(s) de R$ 2.00\n",n2);
 return number;
}

float decompose_coins(float number){
 int c100 = 0, c050 = 0, c025 = 0, c010 = 0, c005 = 0, c001 = 0;
 while(number > 0.9){
  number--;
  c100++;
 }
 while(number > 0.49){
  number-= 0.50;
  c050++;
 }
 while(number > 0.24){
  number-= 0.25;
  c025++;
 }
 while(number > 0.09){
  number-=0.10;
  c010++;
 }
 while(number > 0.049){
  number -= 0.05;
  c005++;
 }
 while(number >0.009){
  number -= 0.01;
  c001++;
 }
 printf("MOEDAS:\n");
 printf("%d moeda(s) de R$ 1.00\n",c100);
 printf("%d moeda(s) de R$ 0.50\n",c050);
 printf("%d moeda(s) de R$ 0.25\n",c025);
 printf("%d moeda(s) de R$ 0.10\n",c010);
 printf("%d moeda(s) de R$ 0.05\n",c005);
 printf("%d moeda(s) de R$ 0.01\n",c001);
 return number;
}