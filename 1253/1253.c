#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void LimpaBuffer(){
	while(getchar() != '\n');
	return;
}

int main (){
	char frase[51];
	int i, t, c, N, X;
	
	scanf("%d", &N);
	LimpaBuffer();
	for(c=0; c<N;c++){
		fgets(frase, 51, stdin);
		scanf("%d", &X);
		LimpaBuffer();
		t = strlen(frase);
		for(i=0; i<=t; i++)
			if(frase[i]>='a' && frase[i]<='z')
				frase[i]= toupper(frase[i]);
		for(i=0; i<=t; i++){
			if(frase[i]>='A'&& frase[i]<='Z'){
				if(frase[i] == '\0')
					break;
				if((frase[i])-X < 'A') 
						frase[i]=frase[i]+(26-X);
				else if((frase[i])-X > 'Z')
						frase[i]=frase[i]+(26+X);
				else
					frase[i]=frase[i]-X;
				printf("%c", frase[i]);
			}
		}
		printf("\n");
	}
	return 0;
}