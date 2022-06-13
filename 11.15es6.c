/*Scrivere un programma che apre in scrittura un file binario
"ciao.bin". Il programma chiede all'utente quanti valori vuole
acquisire da tastiera, e poi procede con l'acquisizione da tastiera
della serie di numeri ed il loro salvataggio nel file.*/

#include<stdio.h>

int main() {
	FILE *fp;
	int n, curr;
 
	fp=fopen("ciao.bin", "wb");
	
	if(fp){
		scanf("%d", &n);
		for(i=0; i<n; i++){
			scanf("%d", &curr)
			fwrite(&curr, sizeof(int), 1, fp);
		}
		fclose(fp);
	} else
		printf("Errore apertura.\n")


	return 0;
}  
