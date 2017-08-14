#include <stdio.h>

int func(int n1,  int n2){
	if(n1 >=n2){

		if(n2 == 1){
			printf("%d\n",((n1 - (n1 % n2))/n2));
		} else{
			printf("%d:",((n1 - (n1 % n2))/n2));
		}
		return n1 % n2;

	} else{

		if(n2 == 1){
			printf("0\n");
		} else{
			printf("0:");
		}
		return n1;
	}
}

int main(void){
	int func(int n1, int n2);	
	int seconds, list[3], i;
	list[0] = 60*60;
	list[1]  = list[0] / 60;
	list[2] = list[1] / 60; 
	scanf("%d",&seconds);
	i  = 0;
	while(i<3){
		seconds = func(seconds, list[i]);
		i++;
	}
	return 0;
}

