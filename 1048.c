
#include <stdio.h>

int main(void){
  int increase;
  float salary;
  scanf("%f", &salary); 
  if(salary >= 0 && salary <= 400.00)
  {
    increase = 15;
  }
  else if(salary >= 400.01 && salary <= 800.00)
  {
    increase = 12;
  }
  else if(salary > 800.01 && salary <= 1200.00)
  {
    increase = 10;
  }
  else if (salary > 1200.01 && salary <= 2000.00)
  {
    increase = 7;
  }
  else if (salary > 2000)
  {
    increase = 4;
  }
  else{
    increase = 0;
  }
  float newSalary = salary + salary*increase/100;
  printf("Novo salario: %.2f\n", newSalary);
  printf("Reajuste ganho: %.2f\n",(salary*increase/100));
  printf("Em percentual: %d %%\n",increase);
  return 0;
}