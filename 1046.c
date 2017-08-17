#include <stdio.h>
#include <math.h>
int main(void){
	int start, end, time;
	scanf("%d %d",&start, &end);
	if(start > end){
		time = 24 - start;
		time += end;
	} 
	else if(start < end){
		time = end - start;
	}
	else{
		time = 24;
	}
	printf("O JOGO DUROU %d HORA(S)\n",time);

	return 0;
}
