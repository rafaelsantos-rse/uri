#include <stdio.h>
int main(void){
  void tax(float salary);
  float salary;
  scanf("%f",&salary);
  tax(salary);

  return 0;
}

void tax(float salary){
  float taxes;
  if (salary >=0 && salary <= 2000.00){
    printf("Isento\n");
  }
  else if(salary >= 2000.01  && salary <= 3000.00){
    salary -= 2000.00;
    taxes = salary * 8 / 100;
    printf("R$ %.2f\n",taxes);
  }
  else if(salary >= 3000.01 && salary <= 4500.00){
    salary-= 3000.00;
    taxes = 1000.00 * 8 / 100;
    taxes += salary*18/100;
    printf("R$ %.2f\n",taxes);
  }
  else if(salary > 4500.00){
    salary-= 4500.00;
    taxes = 1000.00 * 8 / 100;
    taxes += 1500.00 * 18 /100;
    taxes += salary*28/100;
    printf("R$ %.2f\n",taxes);
  }

}