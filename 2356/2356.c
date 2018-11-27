#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	char d[101], s[101];
	int i, j, c;
	
	while(scanf("%s", d)!=EOF){
		scanf("%s", s);
			for(i=0, j=0; d[i] !='\0' && !j; i++){
				if(d[i]==s[j]){
					for(c=i; d[c] !='\0' && j<strlen(s); c++, j++){
						if(d[c]!=s[j])
							break;
				}
				if(j==strlen(s))
					break;
				else
					j=0;
			}
		}
		if(j)
			printf("Resistente\n");
		else
			printf("Nao resistente\n");
	}
return 0;
}