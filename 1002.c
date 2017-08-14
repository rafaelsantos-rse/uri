#include <stdio.h>
int main(void){
	double R, A;
	double n = 3.14159;
	scanf("%lf",&R);
	A = R * R * n;
	printf("A=%.4lf\n",A);
	return 0;
}