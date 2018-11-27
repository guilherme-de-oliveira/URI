#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
	int c, n, cont;
	char nome[20];
	char r;
	
	scanf("%d", &c);
	cont = 0;
	while(cont<c){
		cont++;
		scanf("%s", nome);
		scanf("%d", &n);
		if (strcmp(nome,"Thor") == 0)
			r = 'Y';
		else
			r = 'N';
		printf("%c\n", r);
	}
	
return 0;
}