#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int compare(const void *p1, const void *p2){
	int *i = (int *)p1, *j = (int *)p2;
	
	if(*i < *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}

int main (){
	int n, i;
	int v[1001];
	
	while(scanf("%d", &n) != EOF){
		for(i=0; i<n; i++)
			scanf("%d", &v[i]);
	
		qsort(v, n, sizeof(int), compare);
		for(i=0; i<n; i++)
			printf("%04d\n", v[i]);
	}
return 0;
}