#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	double salFixo, totVendas, totReceber;
	char nome[20];
		
	scanf("%c", &nome);
	gets(nome);
	scanf("%lf", &salFixo);
	scanf("%lf", &totVendas);
	totReceber = salFixo + (totVendas * 0.15);
	
	printf("TOTAL = R$ %.2lf\n", totReceber);

return 0;
}