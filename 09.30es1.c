/*Scrivere un programma che acquisisce due numeri interi n ed m. Il 
programma calcola e visualizza il valore della potenza n^m. Gestire 
opportunamente il casoui m è negativo (il risultato sarà 1/(n^(|
m|) ). Prestare attenzione al casoui l'utente inserisca due valori 
tali per cui n==0 e m<=0, per cui si verificherebbe una divisione 
per 0; in tal caso il programma stampa un messaggio di errore e 
richiede i valori.*/

#include<stdio.h>


int main() {
	int n, m, i;
	float tot;

	scanf("%d %d", &n, &m);

	while (n==0 && m<=0){
		printf("Errore. Inserire altri valori\n");
		scanf("%d %d", &n, &m);
	}

	tot=1;
	i=1;

	if(m>=0){
		while(i<=m){
			tot=tot*n;
			i++;
		}
	}

	if(m<0){
		m=-m;
		while(i<=m){
			tot=tot*n;
			i++;
		}
		tot=1/tot;
	}
	
	printf("%f\n", tot);

	return 0;
}
