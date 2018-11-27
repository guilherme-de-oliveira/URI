#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int n, i;
	char placa[101];
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", placa);
		if(isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2])
			&& placa[3]=='-'&& isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])
				&& isdigit(placa[7]) && placa[8]=='\0'){
					if(placa[7]=='1' || placa[7]=='2')
						printf("MONDAY\n");
					if(placa[7]=='3' || placa[7]=='4')
						printf("TUESDAY\n");
					if(placa[7]=='5' || placa[7]=='6')
						printf("WEDNESDAY\n");
					if(placa[7]=='7' || placa[7]=='8')
						printf("THURSDAY\n");
					if(placa[7]=='9' || placa[7]=='0')
						printf("FRIDAY\n");						
		}else{
			printf("FAILURE\n");
		}
	}
return 0;
}