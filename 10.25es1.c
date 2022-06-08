/*Scrivere un programma che chiede all'utente tre numeri interi e,
mediante l'utilizzo di un puntatore, identifica e visualizza il
valore massimo.
Estendere il programma in modo tale che chieda 10 valori da salvare
in un array ed in seguito calcoli e visualizzi il valore massimo.*/


#include<stdio.h>

int main() {
	int n, n2, n3, *p;

	scanf("%d %d %d", &n, &n2, &n3);

	if(n>n2)
		p=&n;
	else 
		p=&n2;

	if(*p<n3)
		p=&n3;

	printf("%d\n", *p);

	return 0;
}