#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	double A,B,C,media;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	A=A*2;
	B=B*3;
	C=C*5;
	media=(A+B+C)/10;
	
	printf("MEDIA = %.1f\n", media);
	
return 0;
}