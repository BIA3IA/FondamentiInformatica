/*Scrivere un sottoprogramma che riceve come parametri un array di
interi e la sua dimensione. Il sottoprogramma calcola la somma dei
valori dell'array e restituisce il risultato.
Scrivere un programma che chiede all'utente 10 valori da memorizzare
in un array e mediante l'ausilio del sottoprogramma sopra definito
calcola la somma dei valori della prima metà dell'array e quella
della seconda metà. Infine il programma valuta se la prima somma è
maggiore della seconda o meno e visualizza un messaggio con il
responso.*/

#include<stdio.h>
#define DIM 10

int somma(int*, int);
int magg(int, int);

int main() {
	int a[DIM], i, ris1, ris2, mag;

	for(i=0; i<DIM; i++)
		scanf("%d", &a[i]);

	ris1=somma(a, DIM/2);
	ris2=somma(a+DIM/2, DIM/2);

	mag=magg(ris1, ris2);

	if(mag)
		printf("E´ maggiore la prima somma.\n");
	else
		printf("E' maggiore la seconda somma.\n");
	
	return 0;
}

int somma(int *a, int dim){
	int ris, i;

	for(i=0, ris=0; i<dim; i++){
		ris+=*(a+i);
	}

	return ris;
}


int magg(int a, int b){
	int mag;

	if(a>b)
		mag=1;
	else
		mag=0;

	return mag;
}
