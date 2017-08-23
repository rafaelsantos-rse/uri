#include <stdio.h>
int main(void){
  int n , i = 0, qnt;
  char c;
  double qnt_r = 0 , qnt_s = 0, qnt_c = 0, qnt_total = 0;
  scanf("%d",&n);
  while (i < n){
    scanf("%d %c",&qnt, &c);
    if(c == 'R'){
      qnt_total += qnt;
      qnt_r += qnt;
    }
    else if (c == 'C'){
      qnt_c += qnt;
      qnt_total += qnt;
    }
    else if (c == 'S'){
      qnt_s += qnt;
      qnt_total += qnt;
    }

    i++;
  }
  double p_c = (qnt_c*100/qnt_total);
  double p_r = (qnt_r*100/qnt_total);
  double p_s = (qnt_s*100/qnt_total);
  printf("Total: %.0lf cobaias\n",qnt_total);
  printf("Total de coelhos: %.0lf\n",qnt_c);
  printf("Total de ratos: %.0lf\n",qnt_r);
  printf("Total de sapos: %.0lf\n",qnt_s);
  printf("Percentual de coelhos: %.2lf %%\n",p_c);
  printf("Percentual de ratos: %.2lf %%\n",p_r);
  printf("Percentual de sapos: %.2lf %%\n",p_s);

  return 0; 
}