/*In matematica, la congettura di Goldbach è uno dei più vecchi
problemi irrisolti nella teoria dei numeri. Essa afferma che ogni
numero pari maggiore di 2 può essere scritto come somma di due
numeri primi (che possono essere anche uguali).
Scrivere un sottoprogramma che riceve un numero intero positivo
maggiore di 1 e restituisce 1 se il numero è primo, 0 altrimenti.
Scrivere un programma che chiede all'utente un numero n maggiore di
2 e pari (nel caso richiede il numero) e calcola e visualizza tutte
le possibili coppie di numeri primi la cui somma è uguale ad n.*/

#include<stdio.h>

int primo(int);
int input();

int main() {
	int n;

	n=input();

	for(i=2; i<=n/2; i++){			//i<=n/2 perche se no i numeri si ripetono uguali
		if(primo(i) && primo(n-i))
			printf("%d %d", i, i-n);
	}
	
	return 0;
}

int primo(int n){
	int p, i;

	for(i=2, p=1; i*i<=n  && p; i++){
		if(!(n%i))
			p=0;
	}

	return p;
}

int input(){
	int n;

	do {
		scanf("%d", &n);
	} while (n<=2 && n%2);

	return n;
}