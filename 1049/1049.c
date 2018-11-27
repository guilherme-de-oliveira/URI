#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	char palavraA[13], palavraB[13], palavraC[13];
	
	scanf("%s%s%s", palavraA, palavraB, palavraC);
	if(strcmp(palavraA,"vertebrado")==0){
		if(strcmp(palavraB,"ave")==0){
			if(strcmp(palavraC,"carnivoro")==0)
				printf("aguia\n");
			else
				printf("pomba\n");
		
		}else{
			if(strcmp(palavraC,"onivoro")==0)
				printf("homem\n");
			else
				printf("vaca\n");
		}
	}
	if(strcmp(palavraA,"invertebrado")==0){
		if(strcmp(palavraB,"inseto")==0){
			if(strcmp(palavraC,"hematofago")==0)
				printf("pulga\n");
			else
				printf("lagarta\n");
		
		}else{
			if(strcmp(palavraC,"hematofago")==0)
				printf("sanguessuga\n");
			else
				printf("minhoca\n");
		}
	}
	return 0;	
}
