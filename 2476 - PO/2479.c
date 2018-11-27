#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_COMPR	100

void LimpaBuffer();

struct registro{
	char comp;
	char nome[21];
};

int compare(const void*, const void*);

int main (){
	int n, i, pos = 0, neg = 0;
	struct registro vetor[101];
	
	scanf("%d", &n);
	LimpaBuffer();
	for(i=0; i<n; i++)
		scanf("%c %s ", &vetor[i].comp, vetor[i].nome);
	
	qsort(vetor, n, sizeof(struct registro), compare);
	
	for(i=0; i<n; i++)
		printf("%s\n", vetor[i].nome);
	for(i=0; i<n; i++){
		if(vetor[i].comp == '+')
			pos++;
		else
			neg++;
	}
	printf("Se comportaram: %d | Nao se comportaram: %d\n", pos, neg);

return 0;
}

int compare(const void*x, const void*y){
	struct registro *i = (struct registro *)x, *j = (struct registro *)y;
	
	return strcmp(i -> nome, j -> nome);
}

void LimpaBuffer()
{ 	while(getchar() != '\n');
	return;
}