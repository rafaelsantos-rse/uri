#include <stdio.h>

int main(void){

	float A, B, C;
	scanf("%f",&A);
	scanf("%f",&B);
	scanf("%f",&C);
	printf("MEDIA = %2.1f\n", ((A*2 + B*3 + C*5)/(2+3+5)) );
	return 0;
}