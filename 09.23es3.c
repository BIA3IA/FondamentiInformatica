/*Scrivere un programma che calcola il peso di una scatola contenente 
un numero di oggetti tutti uguali. Il programma chiede all'utente il 
peso del singolo oggetto e il loro numero; in seguito esegue il 
calcolo e visualizza il risultato.*/

#include<stdio.h>

int main() {
	int numero, peso, totale;

	scanf("%d %d", &numero, &peso);
	totale=numero*peso;

	printf("peso: %d\n", totale);

	return 0;
}
