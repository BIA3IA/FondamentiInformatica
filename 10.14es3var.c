/*Definire un nuovo tipo di dato per memorizzare una durata temporale
in termini di numero di giorni, ore, minuti e secondi. Scrivere un
programma che riceve da tastiera i dati sulla durata di una serie di
10 intervalli di tempo. Ciascun intervallo di tempo è della durata
massima di 23 ore, 59 minuti e 59 secondi. Il programma deve
assicurarsi che i dati di ciascun intervallo inserito siano validi.
Successivamente, il programma calcola la somma di tutti gli
intervalli e la stampa a video nel formato: giorni, ore, minuti,
secondi (massimo 23 ore, massimo 59 minuti, massimo 59 secondi.
Nessun limite al numero di giorni).
Esempio: per le seguenti durate di due (e non 10 per brevità)
intervalli di tempo (ore, minuti, secondi):
- 20 50 15
- 7 20 30
il risultato che dovrà essere stampato sarà:
1 giorno/i, 4 ora/e, 10 minuto/i e 45 secondo/i.
VARIANTE: modificare il programma in modo tale che chieda all'utente
il numero di intervalli (massimo 10) di cui misurare la durata
complessiva (e ne caso il valore sia sbagliato lo richiede).*/

#include<stdio.h>

#define DIM 10
#define MAX 60
#define MAX_O 24

typedef struct{
	int gio, ore, min, sec;
} intervallo;

#define LUNS 10

int main() {
	intervallo durate[DIM], risultato;
	int i, max;

	scanf("%d", &max);

	for(i=0; i<max; i++){
		scanf("%d", &durate[i].gio);
		do{
			scanf("%d", &durate[i].ore);
		} while (durate[i].ore>MAX-1);
		do{
			scanf("%d", &durate[i].min);
		} while (durate[i].min>MAX-1);
		do{
			scanf("%d", &durate[i].sec);
		} while (durate[i].sec>MAX-1);
	}

	for(i=0, risultato.gio=0, risultato.ore=0, risultato.min=0, risultato.sec=0; i<max; i++){
		risultato.gio+=durate[i].gio;
		risultato.ore+=durate[i].ore;
		risultato.min+=durate[i].min;
		risultato.sec+=durate[i].sec;
	}

	risultato.sec%=MAX;
	risultato.min+=risultato.sec/MAX;

	risultato.ore+=risultato.min/MAX;
	risultato.min%=MAX;

	risultato.gio+=risultato.ore/MAX_O;
	risultato.ore%=MAX_O;
		
	printf("%d giorno/i, %d ora/e, %d minuto/i, %d secondo/i\n", risultato.gio, risultato.ore, risultato.min, risultato.sec);	
	return 0;
}