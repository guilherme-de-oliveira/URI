#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	double 	o, b, i;
	
	scanf("%lf %lf %lf", &o, &b, &i);
	if ((o<b) && (o<i))
		printf("Otavio\n");
	else if ((b<o) && (b<i))
		printf("Bruno\n");
	else if ((i<o) && (i<b))
		printf("Ian\n");
	else
		printf("Empate\n");

return 0;
}