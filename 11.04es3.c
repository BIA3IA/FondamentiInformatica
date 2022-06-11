/*Si considerino le seguenti strutture dati che rappresentano delle
scatole da spedire. Si noti che una scatola può contenere un numero
variabile di oggetti e per ogni oggetto si specifica il peso per
unità ed il numero di unità contenute nella scatola.
#define N_OGGETTI 100
#define MAX_STR 100
#define PESO_CONTAINER 100
typedef struct{
char descrizione[MAX_STR+1];
float peso_per_unita;
int quanti;
int codice;
} oggetto_t;
typedef struct{
oggetto_t oggetti[N_OGGETTI];
int n_oggetti;
char descrizione[MAX_STR+1];
int codice;
} scatola_t;
a) Realizzare un sottoprogramma che riceve come parametri un array
di scatole sc, un valore in virgola mobile che rappresenta un peso,
e qualsiasi altro parametro ritenuto strettamente necessario.
Analizzando le scatole nell'ordine in cui si trovano nell'array, il
sottoprogramma valuta e restituisce il numero di scatole che può
essere immagazzinato in un container avente una capienza pari al
peso ricevuto come ultimo parametro.*/

#include<stdio.h>

#define DIM 10
#define N_OGGETTI 100  
#define MAX_STR 100
#define PESO_CONTAINER 100

typedef struct{
char descrizione[MAX_STR+1];
float peso_per_unita;
int quanti;
int codice;
} oggetto_t;

typedef struct{
oggetto_t oggetti[N_OGGETTI];
int n_oggetti;
char descrizione[MAX_STR+1];
int codice;
} scatola_t;

int scatola(scatola_t[], int, float);

int main() {
	
	return 0;
}


int nscatole(scatola_t sc[], int dim, float peso){
	int i, n, pesosc, ok, j, pesogg;

	for(i=0, pesosc=0, ok=1; i<dim && ok; i++){
		for(j=0, pesogg=0; j<N_OGGETTI; j++){
			pesogg+=sc[i].oggetti[j].peso_per_unita*sc[i].oggetti[j].quanti;
		}
		pesosc+=(sc[i].n_oggetti*pesogg);
		if(pesosc<=peso)
			n=i;
		else
			ok=0;
	}

	return n;
}
