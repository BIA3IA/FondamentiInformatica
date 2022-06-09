/*Scrivere un sottoprogramma che riceve come parametri due array di
interi a1 e a2 e le relative dimensioni d1 e d2, quest'ultima
passata per indirizzo. Il sottoprogramma individua i valori pari
contenuti in a1 e li salva in a2, aggiornando in d2 il numero
effettivo di valori salvati.
Scrivere un programma che dichiara due array di interi x ed y di 10
elementi ciascuno, chiede all'utente 10 valori da memorizzare in x,
invoca il sottoprogramma sopra definito su x ed y in modo tale da
salvare i risultati in y e visualizza il contenuto finale dell'array
y.*/

#include<stdio.h>
#define DIM 10

void pari(int*, int*, int, int*);

int main() {
	int x[DIM], y[DIM], i, dim2;

	for(i=0; i<DIM; i++)
		scanf("%d", &x[i]);

	dim2=0;

	pari(x, y, DIM, &dim2);

	for(i=0; i<dim2; i++)
		printf("%d ", y[i]);

	printf("\n");
	
	return 0;
}

void pari(int *a1, int *a2, int d1, int *d2){
	int i;

	for(i=0; i<d1; i++){
		if(*(a1+i)%2==0){
			*(a2+*d2)=*(a1+i);
			(*d2)++;
		}
	}
}
