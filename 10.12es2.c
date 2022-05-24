/*definire un tipo di dato per rappresentare una matrice
bidimensionale di valori in virgola mobile di dimensioni massime
5x5; la struttura dati dovrà memorizzare le dimensioni effettive
della matrice ed i dati. Scrivere un programma che acquisisce due
matrici, chiedendo prima le dimensioni (e richiedendole nel caso non
siano valide) e poi i valori. Il programma calcola, se possibile, il
prodotto matriciale visualizzando il risultato; in alternativa
visualizza un messaggio di errore.*/

#include <stdio.h>
#define DIM 5

typedef struct {
	int righe, colonne;
	float m[DIM][DIM];
} matrice_t;

int main(){
	matrice_t a, b, prod;
	int i, j, k;

	do
		scanf("%d %d", &a.righe, &a.colonne);
	while (a.righe<=0 || a.colonne<=0 || a.righe>DIM || a.colonne>DIM);

	do
		scanf("%d %d", &b.righe, &b.colonne);
	while (b.righe<=0 || b.colonne<=0 || b.colonne>DIM || b.righe>DIM);

	for (i=0; i<a.righe; i++)
		for(j=0; j<a.colonne; j++)
			scanf("%f", &a.m[i][j]);

	for (i=0; i<b.righe; i++)
		for(j=0; j<b.colonne; j++)
			scanf("%f", &b.m[i][j]);
	
	if(a.colonne!=b.righe){
		printf("Non è possibile calcolare il prodotto matriciale.");
	} else {
		prod.righe=a.righe;
		prod.colonne=b.colonne;

		for(i=0; i<prod.righe; i++){
			for(j=0; j<prod.colonne; j++){
				for(k=0, prod.m[i][j]=0; k<a.colonne; k++){
					prod.m[i][j]+=a.m[i][k]*b.m[k][j];

				}
			}
		}
	}

	for(i=0; i<prod.righe; i++){
		for(j=0; j<prod.colonne; j++){
			printf("%f  ", prod.m[i][j]);
		}
		printf("\n");
	}

	return 0;
}
