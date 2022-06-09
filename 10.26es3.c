/*Scrivere un sottoprogramma che riceve due numeri interi positivi e
calcola l'elevamento a potenza del primo rispetto al secondo,
restituendo il risultato.
Scrivere un sottoprogramma che calcola la radice ennesima intera di
un numero intero positivo. Il sottoprogramma prende come parametri
il numero, il grado della radice, e una variabile, passata per
indirizzo, in cui memorizzare la radice intera. Il sottoprogramma
restituisce 1 se la radice intera è precisa, in alternativa 0.
Scrivere un programma che utilizza tale sottoprogramma per calcolare
la radice ennesima intera di un numero e di un grado chiesti
all'utente, e ne visualizza il risultato.*/

#include<stdio.h>

int potenza(int, int);
int radice(int, int, int*);

int main() {
	int num, grado, ris, prec;

	scanf("%d %d", &num, &grado);

	prec=radice(num, grado, &ris);

	if(prec)
		printf("%d\n", ris);
	else
		printf("Imprecisa.\n");
	
	return 0;
}

int potenza(int n, int a){
	int ris, i;

	for(i=0, ris=1; i<a; i++)
		ris*=n;

	return ris;
}


int radice(int num, int grado, int *ris){
	int prec;

	*ris=1;
	while(potenza(*ris+1, grado)<=num){
		(*ris)++;
	}

	return (potenza(*ris, grado)==num);
}
