/*ES1. Scrivere un programma che acquisisce 20 numeri interi
salvandoli in una array a1. Il programma copia il contenuto di a1 in
un secondo array a2 mettendo prima i numeri pari e poi quelli
dispari. Infine il programma visualizza il risultato.*/

#include <stdio.h>

#define MAX 20

int main(){
	int a1[MAX], a2[MAX];
	int j, i;

	for(i=0; i<MAX; i++)
		scanf("%d", &a1[i]);
	

	for(i=0, j=0; i<MAX; i++){
		if(!(a1[i]%2)){
			a2[j]=a1[i];
			j++;
		}
	}

	for(i=0; i<MAX; i++){
		if(a1[i]%2){
			a2[j]=a1[i];
			j++;
		}
	}

	for(i=0; i<MAX; i++)
		printf("%d ", a2[i]);
	printf("\n");	

	return 0;
}
