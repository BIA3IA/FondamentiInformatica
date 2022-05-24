/*Scrivere un programma che chiede all'utente una stringa di massimo
50 caratteri che rappresenta il percorso completo di un file. Il
programma salva in una nuova stringa il solo nome del file
specificato nel percorso e lo visualizza.
Esempio: dal path "/home/antonio/ciao.c" il programma stampa a video
"ciao.c"*/

#include <stdio.h>
#include <string.h>
#define MAX 50

int main(){
	char str[MAX+1], str2[MAX+1];
	int i, k, len;

	scanf("%s", str);

	len=strlen(str);

	for(i=len-1, k=0; str[i]!='/'; i--, k++){
		str2[k]=str[i];
	}

	str2[k]='\0';

	for(; k>=0; k--){
		printf("%c", str2[k]);
	}

	printf("\n");

	return 0;
}