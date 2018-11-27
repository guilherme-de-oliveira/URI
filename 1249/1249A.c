#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	char frase;
	int i;
	
	while(scanf("%c", &frase) != EOF){
			if(frase>='A' && frase<='Z'){
				if(frase + 13 > 'Z')
					printf("%c", frase-13);
				else
					printf("%c", frase+13);
			}else if(frase>='a'&& frase<='z'){
				if(frase + 13 > 'z')
					printf("%c", frase-13);
				else
					printf("%c", frase+13);	
			}else
				printf("%c", frase);
	}		
return 0;
}