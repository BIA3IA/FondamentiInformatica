/*Scrivere un programma che chiede all'utente due numeri in virgola 
mobile che rappresentano i parametri a e b di un'equazione di primo 
grado ax+b=0. Il programma calcola e visualizza la soluzione 
dell'equazione. Si ricordi che l'equazione può essere impossibile o 
indeterminata.*/

#include<stdio.h>

int main() {
	float a, b, x;

	scanf("%f %f", &a, &b);

	if(a==0)
		printf("IMPOSSIBILE\n");
	else if(b==0 && a==0)
		printf("INDETERMINATA\n");
	else {
		x=-b/a;
		printf("%f\n", x);
	}

	return 0;
}	