#include <stdio.h>
int main(void){
	int number, hours;
	float amount;
	scanf("%d",&number);
	scanf("%d",&hours);
	scanf("%f",&amount);
	printf("NUMBER = %d\n",number);
	printf("SALARY = U$ %.2f\n",(amount*hours));
	return 0;
}