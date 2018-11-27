#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int n, i, j, f=0;
	char ra[101];
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", ra);
		if(ra[0] == 'R' && ra[1] == 'A' && strlen(ra) == 20){
			for(j=2; j<strlen(ra); j++){
				if(ra[j] != '0'){
					printf("%c", ra[j]);
					f = 1;
				}
				if(ra[j] == '0' && f == 1)
					printf("%c", ra[j]);
				if(ra[j] == '\0')
					break;
			}
		}else
			printf("INVALID DATA");
		printf("\n");
		f = 0;
	}
return 0;
}