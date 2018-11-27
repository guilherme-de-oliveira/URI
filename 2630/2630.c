#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int p, r, g, b, t, cont;
	char tipo[5];
	
	scanf("%d", &t);
	for(cont=1; cont<=t; cont++){
		scanf("%s", tipo);
		scanf("%d%d%d", &r, &g, &b);
		
		if(strcmp(tipo,"eye") == 0)
			p = 0.3*r + 0.59*g + 0.11*b;
		if(strcmp(tipo,"mean") == 0)
			p = (r+g+b)/3;
		if(strcmp(tipo,"max") == 0){
			if(r>=g && r>=b)
				p = r;
			if (b>=r && b>=g)
				p = b;
			if(g>=r && g>=b)
				p = g;			
		}
		if(strcmp(tipo,"min") == 0){
			if(r<=g && r<=b)
				p = r;
			if(b<=r && b<=g)
				p = b;
			if(g<=r && g<=b)
				p = g;
		}
		printf("Caso #%d: %d\n", cont, p);
	}
	return 0;
}