#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int t, n, cont, resp;
	
	scanf("%d", &t);
	for(cont=0; cont<t; cont++){
		scanf("%d", &n);
		if(n%4==0)
			resp = 1;
		if((n+1)%4==0)
			resp = 3;
		if((n+2)%4==0)
			resp = 9;
		if((n+3)%4==0)
			resp = 7;
		printf("%d\n", resp);
		}
	return 0;
}