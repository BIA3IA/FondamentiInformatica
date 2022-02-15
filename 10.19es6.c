/*Scrivere un sottoprogramma che chiede all'utente un numero intero
non negativo; se il valore acquisito non è valido il sottoprogramma
visualizza un apposito messaggio di errore e ripete la richiesta.
Una volta acquisito un valore valido, il sottoprogramma restituisce
il numero al chiamate.
Scrivere un programma che acquisisce due numeri positivi mediante
l'apposito sottoprogramma definito sopra e li stampa a video.*/

#include<stdio.h>

int input();

int main() {
	int a, b;

	printf("%d ", input(a));
	printf("%d\n", input(b));
	
	return 0;
}

int input(){
	int n;

	do{
		scanf("%d", &n);
	} while(n<0);

	return n;
} 
