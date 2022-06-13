/*Scrivere un programma apre in lettura un file binario "ciao.bin" che
contiene 10 valori interi. Il programma legge i valori e verifica
che siano stati letti tutti correttamente. In caso affermativo li
visualizza altrimenti segnala l'errore.*/

#include<stdio.h>

#define DIM 10

int main() {
	FILE *fp;
	int n[DIM], i, quanti;

	fp=fopen("ciao.bin", "rb");

	if(fp){
		quanti=fread(n, sizeof(int), DIM, fp);
		if(quanti!=DIM)
			printf("Errore\n");
		else{
			for(i=0; i<DIM; i++){
				printf("%d", n[i]);
			}
			printf("\n");
		}
		fclose(fp);
	} else
		 printf("Errore apertura.\n");
  
	return 0;
}
