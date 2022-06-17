/*Scrivere un sottoprogramma che riceve in ingresso una stringa e due
doppi puntatori a char. Il sottoprogramma divide la stringa in
esattamente due parti di lunghezza uguale (se il numero di caratteri
è dispari lascia il carattere in eccesso nella seconda sottostringa)
e le salva in due array allocati dinamicamente da restituire al
chiamante tramite i due parametri doppio puntatore a char. I due
array vanno allocati esattamente delle dimensioni strettamente
necessarie per contenere i dati. Infine nel caso di errore di
allocazione della memoria il sottoprogramma dovrà restituire due
NULL (deallocando l'eventuale memoria allocata correttamente).
Scrivere un programma che chiede all'utente una stringa di al
massimo 50 caratteri, invoca il sottoprogramma sopra definito
passandogli la stringa acquisita e visualizza il risultato. Il
sottoprogramma dealloca la memoria prima di terminare.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define LUNS 30

void divido(char[], char**, char**);

int main() {
	char str[LUNS+1], *str2, *str1;

	scanf("%s", str);

	divido(str, &str1, &str2);

	printf("%s\n%s\n", str1, str2);

	free(str1);
	free(str2);  

	return 0;
}

void divido(char input[], char **str1, char **str2){
	int len1, len2, i, j, len;

	len=strlen(input);
	len1=len/2;
	len2=len-len1;

	*str1=malloc(sizeof(char)*(len1+1));
	if(*str1){
		*str2=malloc(sizeof(char)*(len2+1));
		if(*str2){

			for(i=0; i<len1; i++)
				(*str1)[i]=input[i];
			(*str1)[i]='\0';

			for(j=0; j<len2; j++, i++)
				(*str2)[j]=input[i];
			(*str2)[j]='\0';

		} else {
			printf("Errore\n");
			free(*str1);
			*str1=NULL;
		}
	} else {
		printf("Errore\n");
		*str2=NULL;
	}
}
