#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_COMPR	100

//void LimpaBuffer();

int compare(const void*, const void*);
struct registro{
	int pos;
	int ind;
};
int main (){
	int voltas, temp=0, i, j, n, m;
	struct registro vetor[100] = {};

	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++){
		voltas=0;
		for(j=0; j<m; j++){
			scanf(" %d", &temp);
			voltas = voltas + temp;
		}
		vetor[i].pos = voltas;
		vetor[i].ind = i;
	}
	
	qsort(vetor, n, sizeof(struct registro), compare);
	
	for(i=0; i<3; i++)
		printf("%d\n", vetor[i].ind+1);
	

return 0;
}

int compare(const void*x, const void*y){
	struct registro *i = (struct registro *)x, *j = (struct registro *)y;
	if(i -> pos < j -> pos)
		return -1;
	else
		if(i -> pos == j -> pos)
			return 0;
		else
			return 1;
}

void LimpaBuffer()
{ 	while(getchar() != '\n');
	return;
}