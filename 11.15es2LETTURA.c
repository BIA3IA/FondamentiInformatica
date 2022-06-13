/*Scrivere un programma apre in lettura un file "ciao.txt". Il
programma legge la sequenza di caratteri salvati nel file (la cui
lunghezza non è nota a priori) e la visualizza.*/

#include<stdio.h>

int main() {
	FILE *fp;
	char c;

	fp=fopen("ciao.txt", "r");
	if(fp){
		fscanf(fp, "%c", &c);
		while(!feof(fp)){
			printf("%c", c);
			fscanf(fp, "%c", &c);
		}
		printf("\n");
		fclose(fp);
	} else 
	printf("Errore in apertura.\n");
	
	return 0;
}
