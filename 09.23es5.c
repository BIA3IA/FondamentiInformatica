/*Scrivere un programma che chiede all'utente una numero in virgola 
mobile. Il programma calcola e visualizza su due righe separate la 
parte intera e quella decimale di tale numero. Per esempio nel caso 
in cui l'utente inserisce il numero 4.14, il programma visualizzerà:
4
0.14*/

#include<stdio.h>
#define DIE 10

int main() {
	ffloat numero, decimale;
	int intero;

	scanf("%f", &numero);

	intero = numero;	/*CAST IMPLICITO*/
	decimale = numero - intero;

	printf("%d\n %f\n", intero, decimale);

	return 0;
}	