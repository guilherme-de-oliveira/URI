#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_COMPR	100

void LimpaBuffer();

struct registro{
	char pais[30];
	int o, p, b;
};
int compare(const void*, const void*);

int main (){
	struct registro rank [500];
	int i, n;
	
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%s %d %d %d", rank[i].pais, &rank[i].o, &rank[i].p, &rank[i].b);
		
	qsort(rank, n, sizeof(struct registro), compare);
	
	for(i=0; i<n; i++)
		printf("%s %d %d %d\n", rank[i].pais, rank[i].o, rank[i].p, rank[i].b);

return 0;
}

int compare(const void*x, const void*y){
	struct registro *i = (struct registro *)x, *j = (struct registro *)y;
	if(i -> o < j -> o)
		return 1;
	else
		if(i -> o  > j -> o)
			return -1;
		else
			if(i -> p < j -> p)
				return 1;
			else
				if(i-> p > j -> p)
					return -1;
				else
					if(i -> b < j -> b)
						return 1;
					else
						if(i -> b > j ->b)
							return -1;
						else
							return strcmp(i -> pais, j -> pais);
					
}

void LimpaBuffer()
{ 	while(getchar() != '\n');
	return;
}