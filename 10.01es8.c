/*Scrivere un programma che chiede all'utente una sequenza di 20
numeri interi salvandoli in un array. Il programma salva in un
secondo array tutti e soli i valori distinti della sequenza
acquisita (ovvero omettere i duplicati). Infine il programma
visualizza il contenuto del secondo array e la sua lunghezza.*/

#include<stdio.h>
#define DIM 20

int main() {
	int num[DIM], i, nodup[DIM], j, k, dup; 

	for(i=0; i<DIM; i++)
		scanf("%d", &num[i]);

	for(i=0, k=0; i<DIM; i++){
		for(j=0, dup=0; j<i && !dup; j++){
			if(num[i]==num[j])
				dup=1;
		}
		if(!dup){
				nodup[k]=num[i];
				k++;
			}
	}

	for(i=0; i<k; i++)
		printf("%d ", nodup[i]);

	printf("\n%d \n", k);

	return 0;
}