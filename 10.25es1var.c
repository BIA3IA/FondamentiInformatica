/*Scrivere un programma che chiede all'utente tre numeri interi e,
mediante l'utilizzo di un puntatore, identifica e visualizza il
valore massimo.
Estendere il programma in modo tale che chieda 10 valori da salvare
in un array ed in seguito calcoli e visualizzi il valore massimo.*/

#include<stdio.h>

#define DIM 10

int main() {
	int arr[DIM], *p, i;

	for(i=0; i<DIM; i++)
		scanf("%d", &arr[i]);

	p=&arr[0];

	for(i=0; i<DIM; i++){
		if(*p<arr[i])
			p=&arr[i];
	}

	printf("%d\n", *p);
	
	return 0;
}