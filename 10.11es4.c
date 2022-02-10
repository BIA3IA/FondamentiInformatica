/*Scrivere un programma che chiede all'utente una stringa di massimo
50 caratteri che rappresenta il percorso completo di un file. Il
programma salva in una nuova stringa il solo nome del file
specificato nel percorso e lo visualizza.
Esempio: dal path "/home/antonio/ciao.c" il programma stampa a video
"ciao.c"*/


#include<stdio.h>
#include<string.h>

#define LUNS 50

int main() {
	char s1[LUNS+1], s2[LUNS+1];
	int i, lun;

	scanf("%s", s1);

	lun=strlen(s1);

	for(i=lun; s1[i]!='/'; i--){
		s2[i]=s1[i];
	}

	s2[lun]='\0';
	for(i=0; i<lun; i++)
		printf("%c", s2[i]);

	printf("\n");
	
	return 0;
} 
