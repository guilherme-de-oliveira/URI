#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int n, cont, i, j, k;
	char a[1000], b[1000];
	
	scanf("%d", &n);
	for(cont=0; cont<n; cont++){
		scanf("%s %s", a, b);
		i=0;
		for(j=strlen(b), k=strlen(a); j>=0; j--, k--){
			if(b[j]==a[k])
				i++;
			else break;
		}
		if(i == strlen(b)+1)
			printf("encaixa\n");
		else
			printf("nao encaixa\n");		
	}

return 0;
}