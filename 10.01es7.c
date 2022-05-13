/*Scrivere un programma in grado di calcolare il valore di polinomi di
grado massimo 8. Il programma chiede all'utente il grado n del
polinomio desiderato (un intero compreso tra 0 e 8 inclusi e nel
caso di valore non valido lo richiede). Successivamente, chiede
all'utente i coefficienti (interi) di tutti i monomi che compongono
il polinomio. Infine, chiede all'utente il valore x (un intero) per
cui fornire la soluzione del polinomio, la calcola e la stampa a
video.*/

#include<stdio.h>
#define MAX 8

int main() {
	int n, coeff[MAX], x, i, potx, sol;

	do(scanf("%d", &n));
	while(n<0 || n>8);

	for(i=0; i<=n; i++)
		scanf("%d ", &coeff[i]);

	scanf("%d",  &x);

	potx=1;
	sol=0;

	for(i=0; i<=n; i++){
		sol+=potx*coeff[i];
		potx*=x;
		}

	printf("%d \n", sol); 
	
	return 0;
}
