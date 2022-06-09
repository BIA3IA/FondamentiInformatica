/*Definire un tipo di dato parola_t che rappresenta una parola
nella lingua italiana e la sua traduzione inglese (due stringhe
ciascuna di al massimo 30 caratteri). Scrivere un programma che
chiede all'utente 10 parole italiane e la loro traduzione in
inglese. Il programma esegue le seguenti elaborazioni:
* Il programma cerca e stampa a video quei termini italiani che
sono presenti anche nella lingua inglese (anche se con un altro
significato).
* Il programma cerca e stampa a video quei termini italiani che
hanno più traduzioni in inglese.
Come esempio si consideri la seguente lista di parole:
scope brooms
scopo scope
case houses
scatola case
goal goal
ciao hello
ciao hi
ballo ball
palla ball
ciao bye
Per il primo punto il programma stamperà a video:
scope brooms * scopo scope
case houses * scatola case
goal goal * goal goal
Per il secondo punto il programma stamperà a video:
ciao hello
ciao hi
ciao bye*/

#include<stdio.h>
#include<string.h>

#define DIM 20
#define NUM 10

typedef struct{
	char ita[DIM+1], eng[DIM+1];
} parola_t;


int main() {
	parola_t parola[NUM];
	int i, j, count;

	printf("Inserire 10 parole e la loro traduzione.\n");
	for(i=0; i<NUM; i++)
		scanf("%s %s", parola[i].ita, parola[i].eng);

	for(i=0; i<NUM; i++){
		for(j=0; j<NUM; j++){
			if(!strcmp(parola[i].ita, parola[j].eng))
				printf("%s %s * %s %s\n", parola[i].ita, parola[i].eng, parola[j].ita, parola[j].eng);
		}
	}

	for(i=0; i<NUM; i++){
		for(j=0, count=0; j<NUM; j++){
			if(!strcmp(parola[i].ita, parola[j].ita)){
				count++;
			}
		} 
		if(count>1)
		printf("%s %s \n", parola[i].ita, parola[i].eng);
	}

	
	return 0;
}

