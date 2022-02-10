/*Scrivere un programma che chiede all'utente un carattere 
dell'alfabeto minuscolo (assumiamo che l'utente non inserisca un 
carattere non valido). Il programma calcola e visualizza il 
corrispondente carattere maiuscolo.*/

#include<stdio.h>

int main() {
	char min, mai;

	scanf(" %c", &min);
	mai=min - ('a'-'A');

	printf("%c\n", mai);	
	
	return 0;
}
