/*Scrivere un programma che chiede all'utente di inserire due sequenze
di 10 numeri interi ciascuna. Il programma controlla che la seconda
sequenza sia una permutazione della prima e stampa a video l'esito
del test (1: permutazioni, 0: altrimenti).*/

#include<stdio.h>
#define DIM 10

int main() {
	int seq1[DIM], seq2[DIM], i, j, perm, qnum1, qnum2;

	for(i=0; i<DIM; i++)
		scanf("%d", &seq1[i]);

	for(i=0; i<DIM; i++)
		scanf("%d", &seq2[i]);

	for(i=0, perm=1; i<DIM && perm; i++){
		qnum1=0;
		qnum2=0;
		for(j=0, perm=1; j<i && perm; j++){
			if(seq1[i]==seq1[j])
				qnum1++;
			if(seq2[i]==seq2[j])
				qnum2++;
		}
		if(qnum1!=qnum2){
			perm=0;
		}
	}

	printf("%d\n", perm);
	
	return 0;
} 
