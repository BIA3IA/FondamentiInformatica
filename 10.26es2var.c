/*Scrivere un sottoprogramma che riceve due numeri interi positivi e
calcola l'elevamento a potenza del primo rispetto al secondo,
restituendo il risultato.
Scrivere un sottoprogramma che calcola il logaritmo in base 2 intero
di un numero intero positivo. Il sottoprogramma riceve come
parametri il numero ed una variabile passata per indirizzo in cui
memorizzare il risultato. Il sottoprogramma restituisce 1 se il
logaritmo intero è preciso, in alternativa 0.
Scrivere un programma che utilizza tale sottoprogramma per calcolare
il logaritmo in base 2 di un numero chiesto all'utente, e ne
visualizza il risultato.
VARIANTE: estendere questo programma per il calcolo del logaritmo in
base N, richiesto all'utente.*/

#include<stdio.h>

int potenza (int, int);
int logaritmo (int, int, int*);

int main() {
	int n, ris, prec, base;

	scanf("%d %d", &n, &base);

	prec=logaritmo(n, base, &ris);

	if(prec)
		printf("%d\n", ris);
	else
		printf("Impreciso.\n");
	
	return 0;
}

int potenza (int n, int a){
	int i, ris;

	for(i=1, ris=1; i<=a; i++)
		ris*=n;

	return ris;
}

int logaritmo(int n, int base, int *ris){
	int prec, i;

	for(i=0, prec=0; i<n && !prec; i++){
		if(potenza(base, i)==n){
			prec=1;
			*ris=i;
		}
	}

	return prec;
}
