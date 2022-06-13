/*Scrivere un sottoprogramma ricorsivo che calcola e restituisce l'i-
esimo numero della sequenza di Fibonacci con i intero positivo o
nullo ricevuto come parametro.
Scrivere un programma che chiede all'utente un valore intero
positivo o nullo (che si assume venga inserito correttamente),
invoca il sottoprogramma definito e visualizza il risultato.*/

#include<stdio.h>

int fibonacci(int);

int main() {
	int n;
	
	scanf("%d", &n);
	printf("%d\n", fibonacci(n));

	return 0;
}

int fibonacci(int i){
	if(i==0)
		return 0;
	if(i==1)
		return 1;
	return fibonacci(i-2)+fibonacci(i-1);
	}