#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_COMPR 101

int compare(const void*x, const void*y){
	int *i = (int*)x, *j = (int*)y;
	if(*i < *j)
		return 1;
	else
		if(*i == *j)
			return 0;
		else
			return -1;
}
int main (){
	int nV[MAX_COMPR], i, n, q, qX;
	
	
	while(scanf("%d %d", &n, &q) != EOF){
		
		for(i=0; i<n; i++)
			scanf("%d", &nV[i]);
		
		qsort(nV, n, sizeof(int), compare);
		
		for(i=0; i<q; i++){
			scanf("%d", &qX);
			printf("%d\n", nV[qX-1]);	
		}
	}
return 0;
}