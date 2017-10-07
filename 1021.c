#include <stdio.h>
int main(void){
	void decompor(float a, float b);
	int Lreais[6] = {100, 50, 20, 10, 5, 2 }, i;
	float Lcentavos[6] = {1, 0.5, 0.25, 0.10, 0.05, 0.01}, dinheiro;
	scanf("%f",&dinheiro);
	for (i = 0; i < 11; i++){
		if(i < 6){
			decompor(dinheiro, Lreais[i]);
		}
		else{
			i -= 6;
			decompor(dinheiro, Lcentavos[i]);
		}
	}
	return 0;
}
void decompor(float a, float b){
	if(b <= 100 && b >= 2){
		int c = 0;
		if(a >= b){
			b = (int) b;
			int c = (int) ( a - (a% b) )
			a -= c;
			c /= b;
		}
		printf("%d nota(s) de R$ %d.00\n",c, b);
	}
	else if( b <= 1 && b >= 0.01){
	 	int c = 0 
	 	while (a >= b){
	 		a -= b;
	 		c++;
	 	}
	 	printf("%d nota(s) de R$ %.2f\n",(int) c, b);
	}
}
