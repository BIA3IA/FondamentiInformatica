/*Scrivere un sottoprogramma che riceve in ingresso due numeri interi
e restituisce (mediante parametri passati per indirizzo) sia il
massimo che il minimo tra i due.
Scrivere un programma che chiede all'utente due numeri, mediante
l'utilizzo del sottoprogramma sopra definito calcola il minimo ed il
massimo ed infine visualizza i due risultati.*/

#include<stdio.h>

void minmax(int, int, int*, int*);

int main() {
	int a, b, max, min;

	scanf("%d %d", &a, &b);

	minmax(a, b, &max, &min);

	printf("%d %d\n", max, min);
	
	return 0;
}

void minmax(int a, int b, int *max, int *min){
	if(a>b){
		*max=a;
		*min=b;
	} else{
		*max=b;
		*min=a;
	} 
}