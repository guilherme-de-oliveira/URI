#include <stdio.h>
#include <stdlib.h>

int main (){
	int n, t, pos, cont, c;
	pos=0;
	c = 0;
	
	scanf("%d", &n);
	for(cont=1; cont<=n; cont++){
		t= 0;
		scanf("%d", &t);
		if (t[cont]<=c)
			pos = cont;
		
		c = t;
	}
	printf("%d", cont);
return 0;
}