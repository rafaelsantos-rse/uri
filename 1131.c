#include <stdio.h>
int main(void){
	int g_i, g_g; /*gol do internacional e do gremio*/
	int gre = 0, inter = 0, draws = 0;
	int r; /*resposta*/
	int qnt = 0;
	do{

		scanf("%d %d",&g_i, &g_g);

		if(g_i > g_g){
			inter++;
		}
		else if(g_g > g_i){
			gre++;
		}
		else{
			draws++;
		}

		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&r);

		qnt++;

	}while(r == 1);

	printf("%d grenais\n",qnt);
	printf("Inter:%d\n",inter);
	printf("Gremio:%d\n",gre);
	printf("Empates:%d\n",draws);

	if (inter > gre){
		printf("Inter venceu mais\n");
	}
	else if(gre > inter){
		printf("Gremio venceu mais\n");
	}
	else{
		printf("Não houve vencedor\n");
	}


	return 0;	
}