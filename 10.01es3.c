/*Scrivere un programma che chiede all'utente di inserire una sequenza 
10 numeri interi; il programma visualizza tutti i pari, poi tutti i 
dispari*/

#include<stdio.h>
#define DIM 10
#define COST 2

int main() {
	int array[DIM], i;

	for(i=0; i<DIM; i++)
		scanf("%d", &array[i]);

	for(i=0; i<DIM; i++)
		if (array[i]%COST) 
			printf("%d ", array[i]);

	printf("\n");
	
	for(i=0; i<DIM; i++)
		if (!(array[i]%COST))
			printf("%d ", array[i]);
		

	printf("\n");
	
	return 0;
}	

/*

#include<stdio.h>
#define DIM 10

int main() {
	int array[DIM], i, tmp;

	for(i=0; i<DIM; i++)
		scanf("%d", &array[i]);

	for(i=0; i<DIM; i++){
		while(array[i]%2==0){
			printf("%d ", array[i]);
			
		}
	}

	printf("\n");

	for(i=0; i<DIM; i++){
		while(array[i]%2!=0){
			printf("%d ", array[i]);
			i++;
		}
	}

	printf("\n");

	return 0;
} 

*/