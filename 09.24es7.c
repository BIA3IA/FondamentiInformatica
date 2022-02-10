/*Scrivere un programma che acquisisce 3 interi. Il programma verifica 
se costituiscono una terna pitagorica; in caso affermativo il 
programma stampa a video "1" altrimenti "0". NOTA: l'utente può 
inserire i tre numeri in qualsiasi ordine; es. "3 4 5" e "5 3 4" 
sono entrambe terne pitagoriche.*/

#include<stdio.h>

int main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if ((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b)){
		printf("terna\n");
	} else
		printf("non terna\n");

	return 0;
}	