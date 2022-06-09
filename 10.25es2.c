/*Scrivere un sottoprogramma che riceve in ingresso due variabili
intere passate come parametri per indirizzo, e ne scambia il
contenuto, rendendo effettiva la modifica anche nel chiamante.
Scrivere un programma che acquisisce due numeri interi e li scambia
mediante il sottoprogramma sopra definito e visualizza il risultato.*/

#include<stdio.h>

void swap(int*, int*);

int main() {
	int a, b;

	scanf("%d %d", &a, &b);

	swap(&a, &b);

	printf("%d %d\n", a, b);

	return 0;
}

void swap(int *a, int *b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

