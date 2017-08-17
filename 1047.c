#include <stdio.h>
int main(void){
	int sHour, sMinutes, eHour, eMinutes, tHour, tMinutes;
	scanf("%d %d %d %d",&sHour, &sMinutes, &eHour, &eMinutes);
	if(sHour > eHour){
		tMinutes = 60 - sMinutes;
		tHour = 23 - sHour;
		tHour += eHour;
		tMinutes += eMinutes;
		if(tMinutes >= 60){
			tMinutes -= 60;
			tHour++;
		} 
	} 
	else if(sHour < eHour){
		tHour = eHour - sHour - 1;
		tMinutes = 60 - sMinutes + eMinutes; 
		if(tMinutes >= 60){
			tMinutes -= 60;
			tHour++;
		} 
	}
	else{
		if (sMinutes >= eMinutes)
		{
			tHour = 23;
			tMinutes = 60 - sMinutes + eMinutes;
			if(tMinutes >= 60)
			{
				tMinutes -= 60;
				tHour++;
			} 
		}
		else if( eMinutes > sMinutes) 
		{
			tHour = 0;
			tMinutes = eMinutes - sMinutes;
		}
		
	}
	printf("O JOGO DUROU %d HORA(S) e %d MINUTO(S)\n",tHour, tMinutes);
	return 0;
}
