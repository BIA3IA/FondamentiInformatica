/*Scrivere un programma che chiede all'utente un numero intero 
positivo e nel caso questo non sia valido stampa un messaggio 
dell'errore e continua a richiederlo. Il programma verifica se il 
numero è composto da sole cifre pari (0, 2, 4, 6, 8) e visualizza un 
messaggio con il responso del test (1: vero, 0: falso).*/

#include<stdio.h> 
#define BASE 10

int main() {
	int n, cifr, res;

	scanf("%d", &n);
	while (n<=0){
		printf("Errore\n");
		scanf("%d", &n);
	}

	res=1;

	while (n>0 && res){
		cifr=n%BASE;
		n=n/BASE;
		if(cifr%2==0){
			res=1;
		} else 
		res=0;
	}

	printf("%d\n", res);

	
	return 0;
}	