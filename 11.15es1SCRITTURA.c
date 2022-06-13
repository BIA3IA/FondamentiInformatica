/*Scrivere un programma che apre in scrittura un file di testo
"ciao.txt" e vi scrive le cifre da '0' a '9'.*/

#include<stdio.h>

#define DIM 10

int main() {
	FILE *fp;
	int n;

	fp=fopen("ciao.txt", "w");
	if(fp){
		for(n=1; n<=DIM; n++)
			fprintf(fp, "%d", n);
		fclose(fp);
	} else
	printf("Errore in lettura\n");

	return 0;
}
