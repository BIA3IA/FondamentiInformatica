/*Scrivere un programma che chiede i dati di due matrici quadrate 4x4
di interi. Il programma calcola e visualizza il loro prodotto
matriciale.*/

#include<stdio.h>
#define DIM 4

int main() {
	int a[DIM][DIM], b[DIM][DIM], r[DIM][DIM], i, j, k;

	for(i=0; i<DIM; i++)
		for(j=0; j<DIM; j++)
			scanf("%d", &a[i][j]);

	for(i=0; i<DIM; i++)
		for(j=0; j<DIM; j++)
			scanf("%d", &b[i][j]);


	for(i=0; i<DIM; i++){
		for(k=0; k<DIM; k++){
			r[k][i]=0;
			for(j=0; j<DIM; j++){
				r[k][i]+=a[i][j]*b[j][i];
			}
		}
	}

	for(i=0; i<DIM; i++){
		for(j=0; j<DIM; j++){
			printf("%d    ", r[i][j]);
		}
		printf("\n");
	}

	return 0;
}