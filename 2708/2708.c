#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int t, i = 0, v = 0;
	char status [7];
	
	scanf("%s", status);
	while(strcmp(status,"ABEND")!=0){
		scanf("%d", &t);
		if(strcmp(status, "SALIDA")==0){
			v = v + 1;
			i = i + t;
		}else{
			v = v - 1;
			i = i - t;
		}
		scanf("%s", status);
	}
	printf("%d\n%d\n", i, v);

return 0;
}