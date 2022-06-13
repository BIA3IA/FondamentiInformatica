/*Scrivere un programma apre in lettura un file di testo il cui nome,
di al massimo 30 caratteri è chiesto all'utente. Il programma legge
la sequenza di valori interi salvati nel file (la cui lunghezza non
è nota a priori) e la visualizza.*/

#include<stdio.h>

#define LUNS 30

int main() {
	FILE *fp;
	char name[LUNS+1];
	int n;

	scanf("%s", name);

	fp=fopen(name, "r");

	if(fp){
		fscanf(fp, "%d", &n);
		while(!feof(fp)){
			printf("%d", n);
			fscanf(fp, "%d", &n);
		}
		fclose(fp);
	} else
		printf("Errore apertura\n");00
	
	return 0;
}