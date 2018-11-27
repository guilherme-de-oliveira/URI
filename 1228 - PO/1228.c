#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_COMPR	100

//void LimpaBuffer();

//int compare(const void*, const void*);

int main (){
	int i, j, vetorUm[24], vetorDois[24], vetorAux[24], n, qtde = 0, aux, troca;
	
	while(scanf("%d", &n) != EOF){
	for(i=0; i<n; i++)
		scanf(" %d", &vetorUm[i]);
	for(i=0; i<n; i++)
		scanf(" %d", &vetorDois[i]);
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			if(vetorUm[i] == vetorDois[j])
				vetorAux[j] = i+25;
	}
	qtde = 0;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(vetorAux[i] > vetorAux[j]){
				aux = vetorAux[j];
				vetorAux[j] = vetorAux[i];
				vetorAux[i] = aux;
				qtde++;
			}
		}
	}
	printf("%d\n", qtde);
	}
	
return 0;
}

int compare(const void*x, const void*y){
	float *i = (float *)x, *j = (float *)y;
	if(*i < *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}

void LimpaBuffer()
{ 	while(getchar() != '\n');
	return;
}