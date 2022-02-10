/*Scrivere un programma che chiede all'utente un valore in virgola 
mobile che rappresenta il raggio di un cerchio. Il programma calcola 
e visualizza l'area ed il perimetro di tale cerchio.*/

#include<stdio.h>
#define PI 3.14

int main() {
	float r, a, p;

	scanf("%f", &r);

	a=r*r*3.14
	p=r*PI*2

	printf("Area: %f\n Perimetro: %f\n", a, p);
	
	return 0;
}
