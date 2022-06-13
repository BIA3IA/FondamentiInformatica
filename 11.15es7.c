/*Scrivere un programma apre in lettura un file binario "ciao.bin". Il
programma legge la sequenza di valori interi salvati nel file (la
cui lunghezza non è nota a priori) e la visualizza.*/

#include<stdio.h>

int main() {
	FILE *fp;
	int n;

	fp=fopen("ciao.bin", "rb");

	if(fp){
		fread(&n, sizeof(int), 1, fp);
		while(!feof(fp)){
			printf("%d ", n);
			fread(&n, sizeof(int), 1, fp);
		}
		printf("\n");
		fclose(fp);
	} else
		printf("Errore apertura.\n");
	 
	return 0;
}
