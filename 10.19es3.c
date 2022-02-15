/*Scrivere un sottoprogramma che riceve come parametri due numeri
interi e restituisce la loro media (un numero float).
Scrivere un programma che chiede all'utente due coppie di interi e
calcola e visualizza la media di ciascuna di esse.*/

#include<stdio.h>

float media (int, int);

int main() {
	int a, b;
	float m;

	scanf("%d %d", &a, &b);
	m=media(a, b);
	printf("%f", m);
	
	scanf("%d %d", &a, &b);
	m=media(a, b);
	printf("%f", m);\
	
	return 0;
}

float media(int n, int k){
	float m;

	m=(n+k)/2;

	return m;
}