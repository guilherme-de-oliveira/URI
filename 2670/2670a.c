#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int a, b, c, mina, minb, minc;
	
	scanf("%d%d%d", &a, &b, &c);
	mina=b*2+c*4;
	minb=a*2+c*2;
	minc=b*2+a*4;
	
	if(mina<minb && mina<minc)
		printf("%d\n", mina);
	else if(minb<=minc && minb<=mina)
		printf("%d\n", minb);
	else
		printf("%d\n", minc);
	
return 0;
}