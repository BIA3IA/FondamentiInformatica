/*Scrivere un programma che chiede all'utente il contenuto di una
matrice quadrata 5x5 di interi. Il programma calcola e visualizza
gli indici (i, j) ed il valore dei massimi locali della matrice. Un
massimo locale è definito come un elemento della matrice i cui
adiacenti sono tutti minori o uguali ad esso.
Esempio:
se l'utente inserisce la matrice:
7 4 3 2 1
1 9 6 4 3
5 9 3 1 6
9 8 2 4 3
4 2 8 4 5
il programma stamperà a video:
M[1][1] = 9
M[2][1] = 9
M[2][4] = 6
M[3][0] = 9
M[4][2] = 8
M[4][4] = 5			*/


#include <stdio.h>
#define DIM 5

int main(){
	int m[DIM][DIM], i, j, max, h, k, mass;

	for(i=0; i<DIM; i++){
		for(j=0; j<DIM; j++){
			scanf("%d", &m[i][j]);
		}
	}

	for(i=0; i<DIM; i++){
		for(j=0; j<DIM; j++){
			for(k=i-1, mass=1; k<=i+1 && k<DIM && mass; k++){
				for(h=j-1; h<=j+1 && h<DIM && mass; h++){
					if(m[k][h]>m[i][j]){
						mass=0;
					}
				}
			}
			if(mass==1){
				max=m[i][j];
				printf("m[%d][%d] = %d \n", i, j, max);
			}
		}
	}
	

	return 0;
}