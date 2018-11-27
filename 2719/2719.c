#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){

	int t, n, m, p[10000], c, cont, conta, pesot, cx;
	
	scanf("%d", &t);
	for (cont=0;cont<t;cont++){
		scanf("%d%d", &n, &m);
		for(conta=0;conta<n;conta++){
			scanf("%d", p[conta]);
			if(pesot+p[conta] < m)
				pesot = pesot+ p[cont];
			else
				cx = cx + 1;
		}
	}
	printf("%d", cx);
		
return 0;
}