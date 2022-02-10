/*Scrivere un programma che chiede all'utente una sequenza di 10
numeri interi. Il programma controlla che non vi siano duplicati
all'interno della sequenza data e visualizza l'esito del test (1 se
non ci sono duplicati, 0 altrimenti).*/

#include<stdio.h>
#define DIM 10

int main() {
	int inp[DIM], dup, i, j;

	for(i=0; i<DIM; i++)
		scanf("%d", &inp[i]);

	for(i=0, dup=1; i<DIM && dup; i++){
		for(j=0; j<i && dup; j++){
			if(inp[i]==inp[j]){
				dup=0;
			}
		}
	}

	printf("%d\n", dup);
	
	return 0;
}