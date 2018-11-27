#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int  d[100], n, j, z, x, y;
	
	for(x=1;x!=0;x++){
		scanf("%d", &n);
		for(y=1;y<=n;y++){
			scanf("%d %d", &j, &z);
		
			d[y] = j - z + d[y-1];
		}
		printf("Teste %d\n", x);
		printf("%d\n", d[y]);		
	}
	printf("\n");

return 0;
}