/*Scrivere un programma che chiede all'utente 10 valori interi da
salvare in un array. In seguito, il programma apre in scrittura un
file binario "ciao.bin" e vi scrive il contenuto dell'array.*/

#include<stdio.h>

#define DIM 10

int main() {
	int a[DIM], i;
	FILE *fp;

	for(i=0; i<DIM; i++)
		scanf("%d", &a[i]);

	fp=fopen("ciao.bin", "wr");

	if(fp){
		fwrite(a, sizeof(int), DIM, fp);
		fclose(fp);
	} else
		printf("Errore aperura.\n");
	
	return 0;
}