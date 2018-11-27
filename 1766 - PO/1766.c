#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_COMPR	100

//void LimpaBuffer();

int compare(const void*, const void*);

struct registro{
	char nome[100];
	int p, id;
	float a;
};

int main (){
	struct registro vetor[10000];
	int n, m, cen, i, t;
	
	scanf("%d", &t);
	for(cen=0; cen<t; cen++){
		scanf("%d %d", &n, &m);
		for(i=0; i<n; i++){
			scanf("%s %d %d %f", vetor[i].nome, &vetor[i].p,
				&vetor[i].id, &vetor[i].a);
		}
		
		qsort(vetor, n, sizeof(struct registro), compare);
		
		printf("CENARIO {%d}\n", cen+1);
		for(i=0; i<m; i++)
			printf("%d - %s\n", i+1, vetor[i].nome);
	}
return 0;
}

int compare(const void*x, const void*y){
	struct registro *i = (struct registro *)x, *j = (struct registro *)y;
	if(i -> p < j -> p)
		return 1;
	else
		if(i -> p > j -> p)
			return -1;
		else
			if(i -> id < j -> id)
				return -1;
			else
				if(i -> id > j -> id)
					return 1;
				else
					if(i -> a < j -> a)
						return -1;
					else
						if(i -> a > j -> a)
							return 1;
						else
							strcmp(i -> nome, j-> nome);
}

void LimpaBuffer()
{ 	while(getchar() != '\n');
	return;
}