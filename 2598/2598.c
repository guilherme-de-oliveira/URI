#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int c, n, m, cont;
	double qtde;
	
	scanf("%d", &c);
	for(cont=0; cont<c; cont++){
		scanf("%d%d", &n, &m);
		qtde = (double)n/m;
		qtde = ceil(qtde);
		printf("%.0lf\n", qtde);
	}
return 0;
}