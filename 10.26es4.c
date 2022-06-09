/*Definire un tipo di dato intervallo_t per descrivere un intervallo
su un asse temporale in termini di inizio e fine (due numeri
interi).
Scrivere un sottoprogramma che chiede i dati di un intervallo. Se
l'utente specifica un valore di inizio maggiore del valore di fine,
il sottoprogramma inverte i due valori per salvarli correttamente in
una variabile di tipo intervallo_t che restituisce al chiamante.
Scrivere un sottoprogramma che riceve come parametri due intervalli
ed un parametro formale intero, detto "sovrapposti", passato per
indirizzo. Il sottoprogramma verifica se i due intervalli sono
sovrapposti ed in caso affermativo assegna 1 a sovrapposti e calcola
e restituisce l'intervallo sovrapposto; in alternativa assegna 0 a
sovrapposti e restituisce l'intervallo di estremi 0, 0.
Scrivere un sottoprogramma che riceve come parametro un intervallo e
restituisce la sua lunghezza
Scrivere un sottoprogramma che riceve come parametro un intervallo e
lo stampa a video.
Scrivere un programma che mediante l'ausilio dei tre sottoprogramma
definiti acquisisce due intervalli e valuta se sono sovrapposti; in
caso affermativo visualizza l'intervallo sovrapposto e la sua
lunghezza. In alternativa mostra un messaggio "non sovrapposti".
Esempio: se l'utente inserisce gli intervalli -2 5 e 1 10,
l'intersezione sarà 1 5 ed avrà lunghezza 4.*/

#include<stdio.h>

typedef struct{
	int inizio, fine;
} intervallo_t;

void swap(int*, int*);
intervallo_t input();
intervallo_t sovrapposti(intervallo_t, intervallo_t, int*);
int magg(int, int);
int min(int, int);
int lunghezza(intervallo_t);
void output(intervallo_t);

int main() {
	intervallo_t int1, int2, ints;
	int sovr, lung;

	int1=input();
	int2=input();

	ints=sovrapposti(int1, int2, &sovr);

	if(sovr){
		lung=lunghezza(ints);
		output(ints);
		printf("Lunghezza: %d\n", lung);
	} else
		printf("Non sono sopvrapposti.\n");
	
	return 0;
}

void swap(int *a, int *b){
	int tmp;
	*a=tmp;
	*a=*b;
	*b=*a;
}

intervallo_t input(){
	intervallo_t intervallo;

	scanf("%d %d", &intervallo.inizio, &intervallo.fine);

	if(intervallo.inizio>intervallo.fine)
		swap(&intervallo.inizio, &intervallo.fine);

	return intervallo;
}

intervallo_t sovrapposti (intervallo_t inter1, intervallo_t inter2, int *sovrap){
	intervallo_t intersovr;

	if(inter2.fine<=inter1.fine && inter2.fine>=inter1.inizio)
		*sovrap=1;
	else
		*sovrap=0;

	if(*sovrap=1){
		intersovr.inizio=magg(inter1.inizio, inter2.inizio);
		intersovr.fine=min(inter1.fine, inter2.fine);
	}else{
		intersovr.inizio=0;
		intersovr.fine=0;
	}

	return intersovr;
}

int magg(int a, int b){
	int mag;

	if(a>b)
		mag=a;
	else
		mag=b;

	return mag;
}

int min(int a, int b){
		int min;

	if(a<b)
		min=a;
	else
		min=b;

	return min;
}

int lunghezza(intervallo_t intervallo){
	int lung;

	lung=intervallo.fine-intervallo.inizio;

	return lung;
}

void output(intervallo_t intervallo){

	printf("Inizio: %d Fine: %d\n", intervallo.inizio, intervallo.fine);
}
