#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int T1, T2, T3, T4, total;
	
	scanf(" %d %d %d %d", &T1, &T2, &T3, &T4);
	total=(T1+T2+T3+T4)-3;
	printf("%d\n", total);

return 0;
}