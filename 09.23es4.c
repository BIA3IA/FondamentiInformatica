/*Scrivere un programma che chiede all'utente due numeri interi. Il 
programma calcola e visualizza la media dei valori acquisti. Si noti 
che la media è un valore reale*/

#include<stdio.h>
#define NUM 2

int main() {
	int a, b;
	float media;	
	
	scanf("%d %d", &a, &b);
	media=(a+b)/NUM;

	printf("media: %f\n", media);

	return 0;
}
