/*Scrivere un programma che chiede all'utente il nome di due file di
testo (due stringhe di al massimo 30 caratteri ciascuna). Il
programma apre i due file e verifica se il loro contenuto è
identico; in caso affermativo il programma stampa a video 1
altrimenti 0. Segnalare a video eventuali casi di errore.*/

#include<stdio.h>

#define LUNS 30

int main() {
	FILE *fp1, *fp2;
	char name1[LUNS+1], name2[LUNS+1], cont1, cont2;
	int uguali;

	scanf("%s %s", name1, name2);

	fp1=fopen(name1, "r");
	if(fp1){
		fp2=fopen(name2, "r");
		if(fp2){
			fscanf(fp1, "%c", &cont1);
			fscanf(fp2, "%c", &cont2);

			uguali=1;

			while(!feof(fp1) && !feof(fp2) && uguali){
				if(cont1==cont2){
					uguali=1;
					fscanf(fp1, "%c", &cont1);
					fscanf(fp2, "%c", &cont2); 
				} else 
					uguali=0;
			}

			if(!feof(fp1) || !feof(fp2))
				uguali = 0;

 		fclose(fp2);

		} else
			printf("Errore apertura file 2\n");

		fclose(fp1);
		printf("%d\n", uguali);
	} else 
		printf("Errore apertura file 1\n");

	return 0;
}
