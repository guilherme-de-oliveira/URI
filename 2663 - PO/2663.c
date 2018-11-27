#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_COMPR	100

//void LimpaBuffer();

int compare(const void*, const void*);

int main (){
	int n, k, notas[1000], i, j, qtde=0;
	
	scanf("%d%d", &n, &k);
	for(i=0; i<n; i++)
		scanf("%i", &notas[i]);
	
	qsort(notas, n, sizeof(int), compare);

	
	for(i=0; i<n; i++){
		if(i < k)
			qtde++;
		else
			if(notas[i] == notas[i-1])
				qtde++;
			else
				break;
	}			
	printf("%d\n", qtde);

return 0;
}

int compare(const void*x, const void*y){
	int *i = (int *)x, *j = (int *)y;
	if(*i < *j)
		return 1;
	else
		if(*i == *j)
			return 0;
		else
			return -1;
}

void LimpaBuffer()
{ 	while(getchar() != '\n');
	return;
}