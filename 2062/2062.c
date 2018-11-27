#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	char palavra[10001];
	int n, i;
	
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf(" %s", palavra);
		if((palavra[0]=='O') && (palavra[1]=='B') && (palavra[2]!='I')
			&& (palavra[3]=='\0'))
			printf("OBI");
		else if((palavra[0]=='U') && (palavra[1]=='R') && (palavra[2]!='I')
			&& (palavra[3]=='\0'))
			printf("URI");
		else
			printf("%s", palavra);
		if(i<n)
			printf(" ");
	}
	printf("\n");
return 0;
}