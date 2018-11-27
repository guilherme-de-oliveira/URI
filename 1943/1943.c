#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int k;
	int a;
	
	scanf("%d", &k);
	if (k<=1)
		a=1;
	else if (k<=3)
		a=3;
	else if (k<=5)
		a=5;
	else if (k<=10)
		a=10;
	else if (k<=25)
		a=25;
	else if (k<=50)
		a=50;
	else
		a=100;
	
	printf("Top %d\n", a);

return 0;
}