#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	char alpha [1001], palavra[10001];
	int i, n, pos;
	
	while(scanf("%s", alpha) != EOF){
		scanf("%d", &n);
		for(i=0; i<n; i++){
		pos=0;
		scanf(" %d", &pos);
		
		palavra[i] = alpha[pos-1];
		printf("%c", palavra[i]);
		}
		printf("\n"); 
	}
return 0;
}