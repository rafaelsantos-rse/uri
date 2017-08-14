#include <stdio.h>

int func1(int n1, int n2){

	if(n1 >= n2){
		int n = (n1 - n1%n2)/n2;
		printf("%d nota(s) de R$ %d.00\n",n, n2);
		return n1%n2;

	} else{
		int n = 0;
		printf("%d nota(s) de R$ %d.00\n",n, n2);
		return n1;

	}
}
/*float func2(float n1, float n2){
	if(n1 >= n2){
		int n = (n1 - n1%n2)/n2;
		printf("%d moeda(s) de R$ %f\n",n, n2);
		return n1%n2;
	} else{
		int n = 0;
		printf("%d moeda(s) de R$ %f\n",n, n2);
		return n1;
	}
}*/
int main(void){

	int list1[6], i = 0;
	float list2[6], d;
	list1[0] = 100;
	list1[1] = 50;
	list1[2] = 20;
	list1[3] = 10;
	list1[4] = 5;
	list1[5] = 2;
	list2[0] = 1.00;
	list2[1] = 0.50;
	list2[2] = 0.25;
	list2[3] = 0.10;
	list2[4] = 0.05;
	list2[5] = 0.01;
	scanf("%f",&d);
	while (i < 6){
		d = func1(d, list1[i]);
		i++;
	}
	printf("Resta: %f\n",d);
	i = 0;
	/*while (i < 6){
		d = func2(d, list2[i]);
		i++;
	}*/ 
	return 0;
}