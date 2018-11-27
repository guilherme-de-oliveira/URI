#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
	int vgD, vgG, t, b, bG, bD, aiG, diG, liG, aiD, diD, liD, cont;
	
	scanf("%d", &t);
	cont = 0;
	for(cont=0;cont<t;cont++){
		aiD = 0;
		diD = 0;
		liD = 0;
		aiG = 0;
		diG = 0;
		liG = 0;
		vgD = 0;
		vgG = 0;
		bD = 0;
		bG = 0;
		b=0;
		scanf("%d", &b);
		scanf("%d%d%d", &aiD, &diD, &liD);
		scanf("%d%d%d", &aiG, &diG, &liG);
		if(liD%2 == 0)
			bD=b;
		else
			bD=0;
	
		if(liG%2 == 0)
			bG=b;
		else
			bG=0;
	
		vgD = ((aiD+diD)/2) + bD;
		vgG = ((aiG+diG)/2) + bG;
	
		if(vgD>vgG)
			printf("Dabriel\n");
		if(vgD<vgG)
			printf("Guarte\n");
		if(vgD==vgG)
			printf("Empate\n");
	}
return 0;
}