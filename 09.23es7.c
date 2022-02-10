/*Scrivere un programma che chiede all'utente un carattere 
dell'alfabeto minuscolo (assumiamo che l'utente non inserisca un 
carattere non valido). Il programma calcola e visualizza il 
carattere successivo a quello inserito ('a' ->'b', 'b' -> 'c', ..., 
'z' -> 'a').*/

#include<stdio.h>
#define PASSO 1

int main() {
	char min, succ;

	scanf("%c", &min);
	succ=(min-'a'+PASSO)%('z'-'a'+PASSO)+'a';

	printf("%c\n", succ);
	
	return 0;
}
