#include <stdio.h>
#include <string.h>
#include <time.h>
int main(void){
	srand(time(NULL));
	int row, len = 12,i,j;
	char opt;
	float m[len][len], sum = 0;
	scanf("%i", &row);
	opt = getchar();
	scanf("%c", &opt);
	for (i = 0; i < len; ++i){
		for(j = 0; j < len; j++){
			scanf("%f", &m[i][j]);
			if(i == row){
				sum += m[i][j];
			}
			/*just debugging:
			m[i][j] = rand()/100000000;
			if(j == len-1){
				printf("[%.1f]\n", m[i][j]);
			} else{
				printf("[%.1f]", m[i][j]);
			}
			*/	
		}
	}
	if(opt == 'S'){
		printf("%.1f\n", sum);
	}
	else if(opt == 'M'){
		printf("%.1f\n", sum/len);
	}
	return 0;
}

