#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int i, num1, num2, num3;
	long int n;
	char palavra[15], aux1[3], aux2[4], aux3[3];
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", palavra);
		aux1[0] = palavra[2];
		aux1[1] = palavra[3];
		aux2[0] = palavra[5];
		aux2[1] = palavra[6];
		aux2[2] = palavra[7];
		aux3[0] = palavra[11];
		aux3[1] = palavra[12];
		num1 = atoi(aux1);
		num2 = atoi(aux2);
		num3 = atoi(aux3);
		printf("%d\n", num1+num2+num3);
	}
return 0;
}