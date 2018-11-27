#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int m , n, cont, tot;
	char totS[10001];
	
	scanf("%d%d", &m, &n);
	while (n!=0 && m!=0){
		tot = m+n;
		sprintf(totS, "%d", tot);
		for(cont=0; cont<strlen(totS); cont++){
			if(totS[cont] != '0')
				printf("%c", totS[cont]);
		}
		printf("\n");
		scanf("%d%d", &m, &n);
	}
return 0;
}