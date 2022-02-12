/*definire un tipo di dato per rappresentare una matrice
bidimensionale di valori in virgola mobile di dimensioni massime
5x5; la struttura dati dovrà memorizzare le dimensioni effettive
della matrice ed i dati. Scrivere un programma che acquisisce due
matrici, chiedendo prima le dimensioni (e richiedendole nel caso non
siano valide) e poi i valori. Il programma calcola, se possibile, il
prodotto matriciale visualizzando il risultato; in alternativa
visualizza un messaggio di errore.*/

#include<stdio.h>
#define DIM 5

typedef struct{
	float mat[DIM][DIM];
	int righe, colonne;
} matrice;

int main() {
	matrice m1, m2, prod;
	int i, j, k;

	do{
		scanf("%d", &m1.righe);
	} while(m1.righe<=0 || m1.righe>DIM);
	
	do{
		scanf("%d", &m1.colonne);
	} while(m1.colonne<=0 || m1.colonne>DIM);
	
	do{
		scanf("%d", &m2.righe);
	} while(m2.righe<=0 || m2.righe>DIM);
	
	do{
		scanf("%d", &m2.colonne);
	} while(m2.colonne<=0 || m2.colonne>DIM);

	for(i=0; i<m1.righe; i++){
		for(j=0; j<m1.colonne; j++){
			scanf("%f", &m1.mat[i][j]);
		}
	}

	for(i=0; i<m2.righe; i++){
		for(j=0; j<m2.colonne; j++){
			scanf("%f", &m2.mat[i][j]);
		}
	}

	// attenzione: con m1==m2 e matrici sottodimensionate, confronterei dati non validi

	if(m1.colonne==m2.righe){
		prod.righe=m1.righe;
		prof.colonne=m2.colonne;

		for(i=0; i<prod.righe; i++){
			for(j=0; j<prod.colonne; j++)
				for(k=0, prod.mat[i][j]=0; k<m1.colonne; k++)
					prod.mat[i][j]+=m1.mat[i][j]*m2.mat[i][j];
		}
		
		for(i=0; i<prod.righe; i++){
			for(j=0; j<prod.colonne; j++)
				printf("%f ", prod.mat[i][j]);
			printf("\n");
		}

	} else 
	printf("ERRORE\n");

	return 0;
} 
