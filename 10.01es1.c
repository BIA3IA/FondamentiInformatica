/*Scrivere un programma che chiede all'utente di inserire 5 numeri 
interi e poi li visualizza in ordine inverso.*/

#include<stdio.h>
#define DIM 5

int main() {
	int array[DIM], i;

	for(i=0; i<DIM; i++)
		scanf("%d", &array[i]);

	for(i=DIM-1; i>=0; i--)
		printf("%d ", array[i]);
	
	printf("\n");

	return 0;
}
