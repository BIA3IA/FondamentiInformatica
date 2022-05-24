/*Scrivere un programma che chiede all'utente i dati di due matrici di
interi, la prima 5x5 e la seconda 2x2. Il programma calcola e
visualizza il numero di volte che la seconda matrice è contenuta
nella prima.*/


#include <stdio.h>
#define DIMG 5
#define DIMP 2

int main(){
	int mat[DIMG][DIMG], sub[DIMP][DIMP];
	int i, j, k, h,conto, isub;

	for(i=0; i<DIMG; i++)
		for(j=0; j<DIMG; j++)
			scanf("%d", &mat[i][j]);

	for(i=0; i<DIMP; i++)
		for(j=0; j<DIMP; j++)
			scanf("%d", &sub[i][j]);
	
	for(i=0, conto=0; i<=DIMG-DIMP; i++){	//prendo DIM1-DIM2 per non uscire dall'array quando li sommo poi
		for(j=0; j<=DIMG-DIMP; j++){
			for(k=0, isub=1; k<DIMP && isub; k++){
				for(h=0; h<DIMP && isub; j++){
					if(mat[i+k][j+h]!=sub[h][k]){
						isub=0;
					}
					if(isub){
						conto++;
					}
				}
			}
		}
	}

	printf("%d\n", conto);



	return 0;
}
