/*Scrivere un sottoprogramma che calcola l'area e il perimetro di un
cerchio di un dato raggio. Il sottoprogramma riceve come parametri
un numero in virgola mobile che rappresenta il raggio del cerchio e
altri due parametri, sempre in virgola mobile, in cui verranno
salvati i due risultati richiesti.
Scrivere un programma che chiede all'utente la lunghezza del raggio
del cerchio, calcola mediante la funzione sopra e visualizza il
perimetro e l'area del cerchio. In seguito il programma chiede
all'utente se vuoi continuare o meno (0 per continuare, qualsiasi
altro valore per terminare).*/

#include<stdio.h>
#define COST 3.14

void areaperim(float, float*, float*);

int main() {
	float r, perim, area;
	int cont;

	cont=0;

	while(cont==0){
		scanf("%f", &r);

		areaperim(r, &area, &perim);

		printf("Area: %f  Perimetro: %f\nSe vuoi continuare premi 0: ", area, perim);

		scanf("%d", &cont);

	}
	return 0;
}

void areaperim(float r, float *area, float *perim){
	*area=r*r*COST;
	*perim=r*COST*2;
}
