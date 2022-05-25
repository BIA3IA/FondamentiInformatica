/*Scrivere un sottoprogramma che riceve in ingresso un valore intero e
ne restituisce il valore assoluto.
Scrivere un sottoprogramma che riceve in ingresso due numeri interi
e ne restituisce il minore.
Scrivere un programma che chiede all'utente due valori interi; il
programma calcola e visualizza il minore tra i valori assoluti dei
due numeri mediante i sottoprogrammi sopra definiti.*/

#include <stdio.h>

int assoluto (int);
int minore(int, int);

int main(){
	int a, b;

	scanf("%d %d", &a, &b);

	a=assoluto(a);
	b=assoluto(b);

	printf("%d \n", minore(a, b));
	
	return 0;
}

int assoluto (int n){

	if(n<0)
		n*=-1;

	return n;
}

int minore (int n, int k){
	int min;

	if(n<k)
		min=n;
	else
		min=k;

	return min;
}