#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_COMPR	100

//void LimpaBuffer();

int main (){
	int n, lVetor[50], l, i, c, aux=0, flag, cont=0;
	
	scanf("%d", &n);
	for(c=0; c<n; c++){
		scanf("%d", &l);
		for(i=0; i<l; i++){
			scanf(" %d", &lVetor[i]);
		}
		cont = 0;
		do{
		flag = 0;
		i = 0;
		while (i < l - 1){
			if (lVetor[i] > lVetor[i + 1]){
				aux = lVetor[i];
				lVetor[i] = lVetor[i + 1];
				lVetor[i + 1] = aux;
				flag = 1;
				cont++;
				
			}
			i = i + 1;
			
		}
		} while (flag == 1);
		printf("Optimal train swapping takes %d swaps.\n", cont);
	}
return 0;
}