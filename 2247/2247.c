#include <stdio.h>
#include <stdlib.h>

int main (){
	int d[100];
	d[0] = 0;
	int n, qn, j, z, cont, saldo;
	qn = 1;
	scanf("%d", &n);
	
	while(n!=0){
		for(cont=1; cont<=n; cont++){
			scanf("%d %d", &j, &z);
			
			saldo = j - z;
			d[cont] = saldo + d[(cont-1)];
		}
		printf("Teste %d\n", qn);
		for(cont=1;cont<=n;cont++)
			printf("%d\n", d[cont]);	
		printf("\n");
		qn++;
		scanf("%d", &n);
	}
	

return 0;
}