/*Scrivere un programma che acquisisce una stringa s1 di massimo
50 caratteri e un numero intero n. Il programma controlla se n è
maggiore di zero e minore della lunghezza della stringa. Se le
condizioni non sono verificate, continua a richiedere il valore. In
seguito il programma crea una nuova stringa s2 che contiene la
rotazione verso destra di s1 di n posizioni e la visualizza.
Esempio: s1="alfabeto" e n=2 -> s2="toalfabe".		*/

#include <stdio.h>
#include <string.h>

#define LUNS 50

int main(){
	char s[LUNS+1], s2[LUNS+1];
	int n, i, len, j;

	scanf("%s", s);

	len=strlen(s);

	do
		scanf("%d", &n);
	while(n>len || n<0);

	for(i=len-n, j=0; i<len; i++){
		s2[j]=s[i];
		j++;
	}

	for(i=0; i<len-n; i++){
		s2[j]=s[i];
		j++;
	}
	
	s2[len]='\0';

	printf("%s \n", s2);

	return 0;
}
