#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct registro{
	char carne[21];
	int dias;
};

int compare(const void*x, const void*y){
	struct registro *i = (struct registro *)x;
	struct registro *j = (struct registro *)y;
	
	if(i -> dias < j -> dias)
		return -1;
	else
		if(i -> dias == j -> dias)
			return 0;
		else 
			return 1;
}

int main (){
	int n, i;
	struct registro item[11];
	
	while(scanf("%d", &n) != EOF){
		for(i=0; i<n; i++){
			scanf("%s %d", item[i].carne, &item[i].dias);
		}
		qsort(item, n, sizeof(struct registro), compare);
		
		for(i=0; i<n; i++){
			if(i == n-1)
				printf("%s", item[i].carne);
			else
				printf("%s ", item[i].carne);
		}
		printf("\n");
	}
return 0;
}