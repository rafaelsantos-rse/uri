/*URI exercise 1045
can be found at:
https://www.urionlinejudge.com.br/judge/pt/problems/view/1045
software done by: Rafael Santos
*/
#include <stdio.h>

int main(void){
	void triangleTest(double a,double b,double c);
	double a, b, c;
	scanf("%lF %lF %lF", &a, &b, &c);
	triangleTest(a, b, c);
	return 0;
}

void triangleTest(double a, double b,double c){
	if( a >= (b + c)){
		printf("NAO FORMA TRIANGULO\n");
	} else{
		if(a*a == (b*b + c*c)){
			printf("TRIANGULO RETANGULO\n");
		}
		else if(a*a > (b*b + c*c)){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		else if(a*a < (b*b + c*c)){
			printf("TRIANGULO ACUTANGULO\n");
		}
	
		if(a == b && a == c){
			printf("TRIANGULO EQUILATERO\n");
		}
		else if(( a == b && a != c ) || (a != b && a == c) || (b == c && b != a)){
			printf("TRIANGULO ISOSCELES\n");
		}
	}

}