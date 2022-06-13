/*Scrivere un programma che apre un file di testo il cui nome è
TEST.txt contenente un sequenza di lunghezza indefinita (0 o più) di
numeri interi. Il programma calcola e stampa a video il valore
massimo e quante volte tale valore si è presentato nel file.*/

#include<stdio.h>

#define FN "TEST.TXT"

int main() {
	FILE *fp;
	int n, max, volte;

	fp=fopen(FN, "r");

	if(fp){
		fscanf(fp, "%d", &max);
		if(!feof(fp)){
			volte=1;
			while(!feof(fp)){
				fscanf(fp, "%d", &n)
				if(n>max){
					max=n;
					volte=1;
				} 
				else if(n==max)
					vole++;
			}	
		} 
		printf("MAX: %d VOLTE: %d\n", max, volte);	
		fclose(fp);
	} else 
		printf("Errore apertura.\n");
	
	return 0;
}
