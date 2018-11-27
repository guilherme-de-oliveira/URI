#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int n, nn, j, z, cont, saldo;
	scanf("%d", &n);
	nn = 1;
	int TabSaldo[100];
	TabSaldo[0] = 0;
	while(n!=0){
		for(cont=1; cont<=n; cont++){
			scanf("%d %d", &j, &z);
			saldo = j - z;
			TabSaldo[cont] = saldo + TabSaldo[(cont-1)];
		}
		printf("%Teste %d\n", nn);
		for(cont=1; cont<=n; cont++)
			printf("%d\n", TabSaldo[cont]);
		printf("\n");
		nn++;
		scanf("%d", n);	
	}		
	return 0;
}