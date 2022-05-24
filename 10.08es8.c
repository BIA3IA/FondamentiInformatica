/*Scrivere un programma che acquisisce una stringa s1 di al massimo 30
caratteri dell'alfabeto minuscolo e segni di interpunzione o spazi
(si assuma che l'utente non commetta alcun errore di inserimento) e
costruisce una nuova stringa s2 che contiene la stesso testo
convertendo i caratteri dell'alfabeto minuscolo in maiuscolo.
Esempio: s1="ciao amico." -> s2="CIAO AMICO.".*/

#include <stdio.h>
#define LUNS 30

int main(){
	char s1[LUNS+1], s2[LUNS+1];
	int j, i;

	scanf("%s", s1);

	for(i=0; s1[i]!='\0'; i++)
		s2[i]=s1[i]-('a'-'A');

	s2[i]='\0';

	printf("%s\n", s2);

	return 0;
}