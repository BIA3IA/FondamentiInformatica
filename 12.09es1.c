/*Scrivere un sottoprogramma che riceve come parametri un
array di interi ordinati in ordine crescente (e la sua dimensione)
ed un numero n. Il sottoprogramma verifica se n è contenuto
nell'array. In caso affermativo restituisce 1 altrimenti 0.
Scrivere un programma che chiede all'utente 10 valori interi e un
valore intero n da cercare, invoca il sottoprogramma definito e
visualizza il risultato.*/

#include<stdio.h>

#define DIM 10

int contenuto(int[], int, int);


int main() {
	int a[DIM], i, n;

	for(i=0; i<DIM; i++)
		scanf("%d", &a[i]);

	scanf("%d", &n);

	printf("%d\n", contenuto(a, DIM, n));
	
	return 0;
}

int contenuto(int a[], int dim, int n){
	int i, cont;

	for(i=0, cont=0; i<dim && !cont; i++)
		if(n==a[i])
			cont=1;

	return cont;
}