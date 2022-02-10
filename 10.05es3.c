/*Scrivere un programma in C che chiede all'utente di inserire i dati
interi di un array bidimensionale quadrato di dimensione 4x4 e
visualizza 1 se la matrice è simmetrica, altrimenti 0.
*/

#include <stdio.h>
#define DIM 4

int main(){

	int array[DIM][DIM], i, j, sim;

	for(i=0; i<DIM; i++)
		for(j=0; j<DIM; j++)
			scanf("%d", &array[i][j]);


	for(i=0, sim = 1; i<DIM && sim; i++){
		for(j=0; j<DIM && sim; j++){
			if(array[i][j] != array[j][i])
				sim = 0;
		}
	}

	printf("%d\n", sim);

	return 0;
}