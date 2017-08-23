#include <stdio.h>
int main(void){
	int n ,i = 0;
	scanf("%d",&n);
	while (i  < n){
		float a, b, c, average;
		scanf("%f %f %f",&a, &b, &c);
		average = (a*2 + b*3 + c*5) / 10;
		printf("%.1f\n",average);
		i++;
	}
	return 0;
}