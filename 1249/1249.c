#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	char frase[51];;
	int i, t;
	
	while(fgets(frase, 51, stdin)!=NULL){
	t = strlen(frase);
	for(i=0; i<=t; i++){
		if(isalpha(frase))
			frase[i]=frase[i]+13;
		else
			frase[i]=frase[i];
	}
	printf("%s\n", frase);
	}
return 0;
}