/*Scrivere un programma che acquisisce una stringa di al più 30
caratteri e calcola e visualizza la sua lunghezza.*/

#include <stdio.h>
#include <string.h>

#define LUNS 30

int main(){
	char str[LUNS+1];
	int lung;

	scanf(" %[^\n]", str); //%s non legge gli spazi, si interrompe allo spazio
	
	for(lung=0; str[i]!='\0'; lung++);

	printf("%d\n", lung);

	return 0;
}	

	/* OPPPURE CON LA FUNZIONE

	lung=strlen(str);

	*/