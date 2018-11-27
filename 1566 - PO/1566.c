#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int compare( const void *x, const void *y);
#define MAX_COMP  3000000
long int vetor[MAX_COMP];

int main (){
	int i, j, c, nc;
	long int n;
	
	scanf("%d", &nc);
	for(c=0; c<nc; c++){
		scanf("%ld", &n);
		for (i=0; i<n; i++)
			scanf(" %ld", &vetor[i]);
			
		qsort(vetor, n, sizeof(vetor[0]), compare);
			
		for(j=0; j<n; j++){
			if(j == n-1)
				printf("%ld\n", vetor[j]);
			else
				printf("%ld ", vetor[j]);
		}
	}
return 0;
}

int compare( const void *x, const void *y){
	long int *i = (long int *)x, *j = (long int *)y;
	
	if(*i < *j)
		return -1;
		else
			if (*i == *j)
				return 0;
			else
				return 1;
}