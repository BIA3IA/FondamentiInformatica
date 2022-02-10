/*Scrivere un programma che chiede all'utente un valore in virgola 
mobile che rappresenta una temperatura in gradi celsius, converte il 
valore in gradi Fahrenheit e visualizza il risultato. NOTA: la 
formula per la conversione è gradi_F = gradi_C x 1.8 + 32*/

#include<stdio.h>
#define COST1 1.8
#define COST2 32

int main() {
	float temp_cels; temp_far;

	scanf("%f", &temp_cels);
	temp_far=temp_cels*COST1+COST2;

	printf("%f\n", temp_far);
	
	return 0;
}
