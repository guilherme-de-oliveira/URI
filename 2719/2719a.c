#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){

	int t, n, m, p[10000], cont, qtde, cx, c;
	
	scanf("%d", &t);
	for(c=0; c<t; c++){
		cx = 0;
		qtde = 0;
		scanf("%d%d", &n, &m);
		for (cont=0; cont<n; cont++){
			scanf("%d", &p[cont]);
			if(qtde+p[cont]<=m){
				qtde = qtde + p[cont];
			}else{
				cx += 1;
				qtde = 0;
				qtde = qtde + p[cont];
			}
		}	
		if(qtde<=m)
			cx += 1;
		printf("%d\n", cx);
		
	}	
return 0;
}