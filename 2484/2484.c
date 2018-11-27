#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int i, c, d;
	char palavra[101];
	
	while(scanf("%s", palavra)!=EOF){
		c=strlen(palavra);
		d=0;
		while(c != 0){
			if(c){
				for(i=0; i<d; i++)
					printf(" ");
				for(i=0; i<c-1; i++){
					printf("%c", palavra[i]);
					printf(" ");
				}
				printf("%c\n", palavra[i]);
				
			c--; d++;
			}
		}
		printf("\n");
	}
return 0;
}