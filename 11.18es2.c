/* Scrivere un sottoprogramma che riceve come parametri un array a1 di
interi e la sua dimensione dim. Il sottoprogramma alloca
dinamicamente un array della stessa dimensione dim, vi copia il
contenuto di a1 e lo restituisce al chiamante. Gestire
opportunamente gli eventuali errori di allocazione della memoria.
Scrivere un programma che dichiara un array da 10 elementi interi e
lo popola con i valori letti da tastiera. Il programma invoca il   
sottoprogramma sopra definito e visualizza il suo risultato. Infine
il programma rilascia la memoria allocata dinamicamente. Gestire
opportunamente gli eventuali errori di allocazione della memoria.*/

#include<stdio.h>
#include<stdlib.h>

#define DIM 10

int* copia(int[], int);

int main(){
	int a[DIM], i, *b;

	for(i=0; i<DIM; i++)
		scanf("%d", &a[i]);

	b=copia(a, DIM);

	if(b){
		for(i=0; i<DIM; i++)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	} else
		printf("ERRORE\n");

	return 0;
}

int* copia(int a1[], int dim){
	int *a2, i;

	a2=malloc(sizeof(int)*dim);

	if(a2){
		for(i=0; i<dim; i++)
			a2[i]=a1[i];
	} else
		printf("Errore\n");

	return a2;
}
