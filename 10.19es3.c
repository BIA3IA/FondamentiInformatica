/*Scrivere un sottoprogramma che riceve come parametri due numeri
interi e restituisce la loro media (un numero float).
Scrivere un programma che chiede all'utente due coppie di interi e
calcola e visualizza la media di ciascuna di esse.*/

#include <stdio.h>
#define NUM 2.0

float media (int, int);

int main(){
	int a, b;
	float med;

	scanf("%d %d", &a, &b);
	printf("%f", media(a,b));
	
	scanf("%d %d", &a, &b);
	printf("%f", media(a,b));
	
	return 0;
}

float media (int n, int k){

	return (n+k)/NUM;
}

/* OPPURE

#include <stdio.h>

float media (int, int);

int main(){
	int a, b;
	float med;

	scanf("%d %d", &a, &b);

	printf("%f", media(a,b));

	
	return 0;
}

float media (int n, int k){
	float a, b;
	
	a=(float)n;
	b=(float)k;
	
	return (a+b)/2;
}

*/
