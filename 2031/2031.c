#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void LimpaBuffer();
int main (){
	int n, i;
	char [7] jog1, jog2;
	
	scanf("%d", &n);
	LimpaBuffer();
	for(i=0; i<n; i++){
		fgets("%s%s", jog1, jog2);
		if(strcmp(jog1, "ataque")==0 || strcmp(jog2, "ataque")==0){
			if(strcmp(jog2, "pedra")==0)
				printf("Jogador 1 venceu\n");
			if(strcmp(jog1, "pedra")==0)
				printf("Jogador 2 venceu\n");
			if(strcmp(jog2, "papel")==0)
				printf("Jogador 1 venceu\n");
			if(strcmp(jog1, "papel")==0)
				printf("Jogador 2 venceu\n");
			if(strcmp(jog2, "ataque")==0 && strcmp(jog1, "ataque")==0)
				printf("Aniquilação mutua\n");
		}
		if(strcmp(jog1, "pedra")==0 || strcmp(jog2, "pedra")==0){
			if(strcmp(jog2, "papel")==0)
				printf("Jogador 1 venceu\n");
			if(strcmp(jog1, "papel"==0))
				printf("Jogador 2 venceu\n");
			if(strcmp(jog1, "pedra")==0 && strcmp(jog2, "pedra")==0)
				printf("Sem ganhador\n");
		}
		if(strcmp(jog1, "papel")==0 && strcmp(jog2, "papel")==0)
			printf("Ambos venceram\n");
	}
	

return 0;
}
void LimpaBuffer(){
 	while(getchar() != '\n');
	return;
}