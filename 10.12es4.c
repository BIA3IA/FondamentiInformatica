/*Scrivere un programma che chiede all'utente i dati di due matrici di
interi, la prima 5x5 e la seconda 2x2. Il programma calcola e
visualizza il numero di volte che la seconda matrice è contenuta
nella prima.*/

#include<stdio.h>

#define DIM1 5
#define DIM2 2

int main() {
	int m1[DIM1][DIM1], m2[DIM2][DIM2], i, j, h, k, conto, isub;

	for(i=0; i<DIM1; i++)
		for(j=0; j<DIM1; j++)
			scanf("%d", &m1[i][j]);

	for(i=0; i<DIM2; i++)
			for(j=0; j<DIM2; j++)
				scanf("%d", &m2[i][j]);

	for(i=0, conto=0; i<=DIM1-DIM2; i++){ 			//prendo DIM1-DIM2 per non uscire dall'array quando li sommo poi
		for(j=0; j<=DIM1-DIM2; j++){
			for(h=0, isub=0; h<DIM2 && isub; h++){
				for(k=0; k<DIM2 && isub; k++){
					if(m1[i+h][j+k]!=m2[h][k]); 
				}
				if(isub)
					conto++;
			}
		}
	}

	printf("%d\n", conto);

	return 0;
} 
