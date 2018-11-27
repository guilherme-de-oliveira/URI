#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_COMPR	10000

//void LimpaBuffer();

int compare(const void*, const void*);

int main (){
	int vetor[MAX_COMPR], i, j, n, qtde;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &vetor[i]);
	
	qsort(vetor, n, sizeof(int), compare);
	
	for(i=0; i<n; i++){
		qtde = 1;
		if(vetor[i] == vetor[i+1]){
			for(j=i; j<n; j++)
				if(vetor[j] == vetor[j+1])
					qtde++;
				else{
					printf("%d aparece %d vez(es)\n", vetor[i], qtde);
					break;
				}
				i=j;
		}else
			printf("%d aparece 1 vez(es)\n", vetor[i]);
	}
return 0;
}

int compare(const void*x, const void*y){
	int *i = (int *)x, *j = (int *)y;
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