/*Scrivere un sottoprogramma che riceve in ingresso due valori in
virgola mobile, calcola e restituisce il maggiore tra i due.
Scrivere un programma che chiede all'utente tre numeri in virgola
mobile e stabilisce, mediante il sottoprogramma definito prima,
quale dei tre è più grande visualizzandolo a video.*/

#include<stdio.h>

float maggiore(float, float);

int main() {
	float n, k, j, mag;

	scanf("%f %f %f", &n, &k, &j);

	mag=maggiore((n, k), j);

	printf("%f", mag);
	
	return 0;
}

float maggiore(float n, float k){
	float mag;

	if(n>k){
		mag=n;
	} else {
		mag=k;
	}

	return mag;
} 
