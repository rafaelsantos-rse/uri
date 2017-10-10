/*URI exercise 1045
can be found at:
https://www.urionlinejudge.com.br/judge/pt/problems/view/1045
software done by: Rafael Santos
*/
#include <stdio.h>

int main(void){
	void triangleTest(double *v);
	void sort(double *v, int length);
	int length = 3;
	double v[length];
	scanf("%lF %lF %lF", &v[0], &v[1], &v[2]);
	sort(v, length);
	/*printf("%.1lf %.1lf %.1lf\n", v[0], v[1], v[2]);*/
	triangleTest(v);
	return 0;
}

void triangleTest(double *v){
	double c = v[0], b = v[1], a = v[2];
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
void sort(double *v, int length){
	int j, i;
	double k;
	for (j = 1; j < length; j++){
		i = j - 1;
		k = v[j];
		while (i >= 0 && v[i] > k){
			v[i+1] = v[i];
			i--;
		}
		v[i+1]= k;
	}

}