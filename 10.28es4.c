/*Scrivere un sottoprogramma che riceve come parametri un array di
interi e la sua dimensione. Il sottoprogramma popola l'array con
valori chiesti all'utente.
Scrivere un secondo sottoprogramma che riceve come parametri un
array di interi e la sua dimensione, quest'ultima passata per
indirizzo. Il sottoprogramma rimuove dall'array i valori duplicati
ed aggiorna la dimensione ricevuta come parametro con il numero
effettivo di valori validi contenuti nell'array.
Scrivere un terzo sottoprogramma che riceve come parametri due array
con le relative dimensioni. Assumendo che ciascuno dei due array in
ingresso non contenga valori duplicati, il sottoprogramma calcola
l'intersezione del contenuto dei due array salvando il risultato in
un terzo array ricevuto anch'esso come parametro; inoltre il
sottoprogramma restituisce al chiamate tramite un ultimo parametro
passato per indirizzo il numero effettivo di valori contenuti
nell'intersezione.
Scrivere un sottoprogramma che riceve come parametri un array di
interi e la sua dimensione e visualizza il contenuto dell'array.
Scrivere un programma che mediante l'ausilio dei sottoprogrammi
sopra definiti 1) chiede all'utente i dati di tre array contenenti
20 valori interi ciascuno, 2) rimuove i duplicati in ciascuno di
essi, 3) visualizza i tre insiemi risultanti, 4) calcola
l'intersezione dei tre insiemi, 5) visualizza il risultato finale.*/

#include<stdio.h>
#define DIM 5

void input(int[], int);
void duplicati(int[], int*);
void intersezione(int[], int[], int[], int, int, int*);
void output(int[], int);

int main() {
	int a1[DIM], a2[DIM], a3[DIM], tmp[DIM*2], inters[DIM*3];
	int dimeff, dimtmp, dim1, dim2, dim3;
	
	dim1=DIM;
	dim2=DIM;
	dim3=DIM;
	dimtmp=0;
	dimeff=0;

	input(a1, dim1);
	input(a2, dim2);
	input(a3, dim3);

	duplicati(a1, &dim1);
	duplicati(a2, &dim2);
	duplicati(a3, &dim3);

	output(a1, dim1);
	output(a2, dim2);
	output(a3, dim3);
	
	intersezione(a1, a2, tmp, DIM, DIM, &dimtmp);
	intersezione(tmp, a3, inters, dimtmp, DIM, &dimeff);

	output(inters, dimeff);

	return 0;
}

void input(int a[], int dim){
	int i;

	for(i=0; i<dim; i++)
		scanf("%d", &a[i]);
}

void duplicati(int a[], int *dim){
	int i, k, j;

	for(i=0; i<*dim; i++){
		for(k=i+1; k<*dim; k++){
			if(a[i]==a[k]){
				(*dim)--;
				k--;
				for(j=0; j<=*dim; j++){
					a[i]=a[i+1];
				}
			}
		}
	}
}

void intersezione(int a[], int b[], int inter[], int dim1, int dim2, int *dimeff){
	int i, j;

	for(i=0, *dimeff=0; i<dim1; i++){
		for(j=0; j<dim2; j++){
			if(a[i]==b[j]){
				inter[*dimeff]=a[i];
				(*dimeff)++;
			}
		}
	}

	duplicati(inter, dimeff);

}

void output(int a[], int dim){
	int i;

	for(i=0; i<dim; i++)
		printf("%d ", a[i]);

	printf("\n");
}
