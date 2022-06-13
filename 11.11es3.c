/*Scrivere un sottoprogramma ricorsivo che calcola e restituisce Il
fattoriale di un numero intero positivo o nullo n ricevuto come
parametro.
Scrivere un programma che chiede all'utente un valore intero
positivo o nullo (e nel caso non sia un valore valido lo richiede),
invoca il sottoprogramma definito e visualizza il risultato.*/
  
#include<stdio.h>

int fattoriale(int);

int main() {
	int n;

	do
		scanf("%d", &n);
	while(n<0);

	printf("%d\n", fattoriale(n));
	
	return 0;
}

int fattoriale(int n){
	if(n==0 || n==1)
		return 1;
	return n*fattoriale(n-1);
}
