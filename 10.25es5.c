/*Scrivere un sottoprogramma che esegue la divisione tra due interi
positivi, restituendo mediante parametri passati per indirizzo sia
il risultato che il resto. Scrivere un programma che chiede un
numero all'utente e trova il primo divisore più grande di 1,
visualizzandolo il divisore ed il risultato della divisione.*/

#include<stdio.h>

void divisione(int, int, int*, int*);

int main() {
	int a, num, rest, i;

	scanf("%d", &a);

	for(i=2, rest=1; rest!=0; i++){
		divisione(a, i, &num, &rest);
	}

	printf("%d\n", num);
	
	return 0;
}

void divisione(int a, int b, int *num, int *rest){
	*num=a/b;
	*rest=a%b;
}