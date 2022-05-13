/*Scrivere un programma che chiede all'utente di inserire i dati
interi di una matrice bidimensionale quadrata di dimensione 5. Il
programma calcola la matrice ruotata di 90 gradi in senso
antiorario, salvandola in una nuova variabile e visualizza il
risultato.*/

#include<stdio.h>
#define DIM 5

int main() {
	int mat[DIM][DIM], i, j, ruot[DIM][DIM];
	
	for(i=0; i<DIM; i++){
		for(j=0; j<DIM; j++)
			scanf("%d", &mat[i][j]);
	}

	for(i=0; i<DIM; i++){
		for(j=0; j<DIM; j++)
			ruot[DIM-1-j][i]=mat[i][j];
	}

	for(i=0; i<DIM; i++){
		for(j=0; j<DIM; j++)
			printf("%d\t", mat[i][j]);
		printf("\n")
	}

	return 0;
} 

// OPPURE

#include<stdio.h>
#define DIM 5

int main() {
	int a[DIM][DIM], i, j, b[DIM][DIM];

	for(i=0; i<DIM; i++){
		for(j=0; j<DIM; j++)
			scanf("%d", &a[i][j]);
	}

	for(i=0; i<DIM; i++){
		for(j=0; j<DIM; j++){
			b[i][j]=a[j][DIM-1-i];
		}
	}
	

for(i=0; i<DIM; i++){
		for(j=0; j<DIM; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
