/*Scrivere un programma che chiede all'utente di inserire 5 numeri 
interi e li salva in un array. Il programma verifica se la sequenza 
è palindroma stampando a video l'esito del test, cioè 1 se 
palindroma o 0 altrimenti.*/

#include<stdio.h>
#define DIM 5

int main() {
	int array[DIM], i, pal;

	for(i=0; i<DIM; i++)
		scanf("%d", &array[i]);

	for(i=0, pal=1; i<DIM/2 && pal; i++)
		if (array[i]!= array[DIM-1-i])
			pal=0

	printf("%d\n", pal);
	
	return 0;
}
