/*Scrivere un sottoprogramma che calcola la radice quadrata intera di
un numero intero positivo. Il sottoprogramma riceve come parametro
il numero intero ed un'altra variabile, passata per indirizzo, in
cui memorizzare la radice intera. Il sottoprogramma restituisce 1 se
la radice intera è precisa, in alternativa 0. Scrivere un programma
che utilizza tale sottoprogramma per calcolare la radice quadrata
intera di un numero chiesto all'utente, e ne visualizza il
risultato.*/

#include<stdio.h>
#include<math.h>

int radice(int, int*);

int main() {
	int n, ris, precisa;

	scanf("%d", &n);

	precisa=radice(n, &ris);

	if(precisa)
		printf("%d\n", ris);
	
	return 0;
}

int radice(int n, int *rad){
	*rad=sqrt(n);

	if((*rad)*(*rad)==n)
		return 1;
	else 
		return 0;
}