/*Scrivere un programma che chiede all'utente un valore intero 
positivo o nullo che rappresenta l'importo che un cassiere deve 
restituire al cliente. Assumendo che l'utente abbia solo banconote 
da 5 euro e monete da 1 euro, il programma stabilisce e visualizza 
quante banconote da 5 euro deve restituire ed eventualmente quante 
monete da 1 euro.*/

#include<stdio.h>
#define BANCONOTE 5

int main() {
	int resto, banconote, monete;

	scanf("%f", &resto);
	banconote=resto/BANCONOTE
	monete=resto%banconote

	printf("Resto: %d banconete e %d monete\n", banconote, monete);
	
	return 0;
}	