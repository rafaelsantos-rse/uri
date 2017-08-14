#include <stdio.h>
int main(void){
	int X;
	float Y;
	scanf("%d",&X);
	scanf("%f",&Y);
	printf("%.3f km/l\n",(X/Y));
	return 0;
}