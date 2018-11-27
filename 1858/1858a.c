#include <stdio.h>
#include <stdlib.h>

int main (){
	int n, t[21], pos, cont, c;
	pos=0;
	c = 0;
	
	scanf("%d", &n);
	for(cont=1; cont<=n; cont++){
		scanf("%d", t[cont]);
	if(t[cont]<=pos)
		pos=cont;
	else
		pos=cont;
	}
	printf("%d", pos);
return 0;
}