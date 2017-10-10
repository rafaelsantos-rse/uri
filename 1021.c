#include <stdio.h>
int main(void){
	void decomporR(float a, int *B);
	void decomporC(float a, float *B);
	void *p;
	int Reais[6] = {100, 50, 20, 10, 5, 2 }, i;
	float Centavos[6] = {1.0, 0.5, 0.25, 0.10, 0.05, 0.01}, dinheiro;
	scanf("%f",&dinheiro);
	p = &Reais[0];
	for (i = 0; i < 6; i++){
		decomporR(dinheiro, p);
		++p;
	}
	p = &Centavos[0];
	for (i = 0; i < 6; i++){
		decomporC(dinheiro, p);
		p++;
	}
	return 0;
}
void decomporR(float a, int *B){
	int b = *B;
	if(b <= 100 && b >= 2){
		int c = 0;
		while (a >= b){
			a -= b;
			c++;
		}
		printf("%d nota(s) de R$ %d.00\n", c, b);
	}
}
void decomporC(float a, float *B){
 	float b  = *B;
	if(b <= 1 && b >= 0.01){
	 	int c = 0;
	 	while (a >= b){
	 		a -= b;
	 		c++;
	 	}
	 	printf("%d nota(s) de R$ %.2f\n",(int) c, b);
	}
}
