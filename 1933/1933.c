#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int a, b, c;
	
	scanf("%d%d", &a, &b);
	if (a>b){
		if(a==13)
			c=13;
		else if(a==12)
			c=12;
		else if (a==11)
			c=11;
		else if (a==10)
			c=10;
		else if (a==9)
			c=9;
		else if (a==8)
			c=8;
		else if (a==7)
			c=7;
		else if (a==6)
			c=6;
		else if (a==5)
			c=5;
		else if (a==4)
			c=4;
		else if (a==3)
			c=3;
		else if (a==2)
			c=2;
		else
			c=1;
	}
	if (b>a){
		if(b==13)
			c=13;
		else if(b==12)
			c=12;
		else if (b==11)
			c=11;
		else if (b==10)
			c=10;
		else if (b==9)
			c=9;
		else if (b==8)
			c=8;
		else if (b==7)
			c=7;
		else if (b==6)
			c=6;
		else if (b==5)
			c=5;
		else if (b==4)
			c=4;
		else if (b==3)
			c=3;
		else if (b==2)
			c=2;
		else
			c=1;
	}
	if (a==b)
		c=a;
	
	printf("%d\n", c);

return 0;
}