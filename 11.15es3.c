/*Scrivere un programma che apre in scrittura un file di testo il cui
nome, di al massimo 30 caratteri, è chiesto all'utente. In seguito,
il programma chiede all'utente quanti valori interi vuole acquisire
da tastiera, e poi procede con l'acquisizione da tastiera della
serie di numeri ed il loro salvataggio nel file.*/

#include<stdio.h>

#define LUNS 30

int main() {
	char nome[LUNS+1];
	FILE *fp;
	int n, i, numero;

	scanf("%s", nome);
	scanf("%d", &n);

	fp=fopen(nome, "w");

	if(fp){
		for(i=0; i<n; i++){
			scanf("%d", &numero);
			fprintf(fp,"%d", numero);
		}
		fclose(fp);
	} else
		printf("Non aperto corretamente\n");
	
	return 0;
}