#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_COMPR	100

//void LimpaBuffer();
int Pcompare(const void*, const void*);
int Icompare(const void*, const void*);


int main (){
	int par[100001];
	int impar[100001];
	
	int i, n, aux;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		par[i] = 0;
		impar[i] = 0;
	}
	for(i=0; i<n; i++){
		scanf("%d", &aux);
		if (aux % 2 == 0)
			par[i] = aux;
		else
			impar[i] = aux;
	}
		
	qsort(par, n, sizeof(par[0]), Pcompare);
	qsort(impar, n, sizeof(impar[0]), Icompare);
	
	for(i=0; i<n; i++){
		if(par[i] != 0)
			printf("%d\n", par[i]);
	}
	for(i=0; i<n; i++){
		if(impar[i] != 0)
			printf("%d\n", impar[i]);
	}
return 0;
}

int Pcompare(const void*x, const void*y){
	int *i = (int *)x, *j = (int *)y;
	if(*i < *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}
int Icompare(const void*x, const void*y){
	int *i = (int *)x, *j = (int *)y;
	if(*i < *j)
		return 1;
	else
		if(*i == *j)
			return 0;
		else
			return -1;
}