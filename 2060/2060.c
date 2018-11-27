#include<stdio.h>
#include<stdlib.h>

int main() {

	int mp2 = 0;
	int mp3 = 0;
	int mp4 = 0;
	int mp5 = 0;
	int cont, n, qtde;
	
	scanf("%d", &qtde);
	for(cont=0;cont<qtde;cont++){
		scanf("%d", &n);
		if (n%2 == 0)
			mp2 = mp2+1;
		if (n%3 == 0)
			mp3 = mp3+1;
		if (n%4 == 0)
			mp4 = mp4+1;
		if (n%5 == 0)
			mp5 = mp5+1;
	}
	printf("%d Multiplo(s) de 2 \n", mp2);
	printf("%d Multiplo(s) de 3 \n", mp3);
	printf("%d Multiplo(s) de 4 \n", mp4);
	printf("%d Multiplo(s) de 5 \n", mp5);
	
	return 0;
}