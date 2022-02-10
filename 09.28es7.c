/*Scrivere un programma che calcola il massimo di una sequenza di 50 
numeri interi inseriti dall'utente e visualizza il risultato.*/

#include<stdio.h>
#define MAX 50

int main() {
	int a, b, i, max;

	scanf("%d", &a);

	i=2;
	max=a;
	while(i<=MAX){
		scanf("%d", &b);
		i++;
			if(max<b) 
				max=b;
	}

	printf("Il massimo è: %d\n", max);

	return 0;
}	