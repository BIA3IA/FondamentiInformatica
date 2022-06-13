/*Scrivere un programma che apre un file di testo il cui nome di al
massimo 30 caratteri va chiesto all'utente e che contiene una
sequenza di lunghezza indefinita (0 o più) di numeri interi. Per
ciascun numero letto, il programma stabilisce se è il doppio del
suo precedente; in tal caso stampa a video la coppia di numeri.
Esempio: se il contenuto del file è "1 2 5 2 4 8 5 4 5", il
programma stampa a video:
1 2
2 4
4 8*/

#include<stdio.h>

#define LUNS 30

int main() {
	char nome[LUNS+1];
	int n, curr;
	FILE *fp;

	scanf("%s", nome);

	fp=fopen(nome, "r");

	if(fp){
		fscanf(fp, "%d", &n);
		while(!feof(fp)){
			fscanf(fp, "%d", &curr);
			if(n*2==curr){
				printf("%d %d\n", &n, &curr);
			}
			curr=n;
		}
		fclose(fp);
	} else
		printf("Errore apertura.\n");
	
	return 0;
}