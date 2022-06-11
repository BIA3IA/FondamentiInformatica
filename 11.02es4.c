/*Definire le strutture dati per rappresentare un concessionario di
automobili. Il concessionario è descritto in termini di un codice
numerico, i dati di un gestore ed una lista di massimo 50
automobili. Il gestore è a sua volta descritto in termini di una
partita IVA, un nome ed un cognome, tre stringhe di al massimo 30
caratteri ciascuna. L'automobile infine è descritta in termini di un
modello (una stringa di al massimo 30 caratteri), una targa (una
stringa di al massimo 7 caratteri) e mese ed anno di
immatricolazione (due interi).
Realizzare un sottoprogramma che riceve come parametro un array di
tipo concessionario, un intero AA che rappresenta un anno, e
qualsiasi altro parametro ritenuto strettamente necessario. Per ogni
concessionario il sottoprogramma stampa a video modello, targa e
mese (in numero) delle auto immatricolate nell'anno AA. Il report
mostrato dovrà avere il seguente formato:
Conc. 0, codice 12345: gestore Paolo Rossi
Immatricolazioni 2015:
* mese 9: Punto, MI80980
* mese 6: Marea, TO12567
Conc. 1, codice 23456: gestore Luca Bianchi
Immatricolazioni 2015:
* mese 2: Panda, VE85980
Conc. 2, codice 23556: gestore Franco Verdi
Immatricolazioni 2015:
NESSUNA
Scrivere un programma che chiede all'utente i dati di 10
concessionari ed invoca la funzione sopra definita per stampare la
reportistica.*/

#include<stdio.h>
#define LUNS 30
#define MAX 50
#define LUNT 7

typedef struct{
	char nome[LUNS+1], cognome[LUNS+1], piva[LUNS+1];
} gestore_t;

typedef struct{
	char model[LUNS+1], targa[LUNT+1];
	int mese, anno;
} auto_t;

typedef struct{
	int cod;
	gestore_t gestore;
	auto_t autom[MAX];
} concessionario_t;

void output(concessionario_t[], int, int);

int main() {
	
	return 0;
}

void output(concessionario_t con[], int dim, int aa){
	int i, j, trovato;

	for(i=0; i<dim; i++){
		printf("Conc. %d, codice %d: gestore %s %s\nImmatricolazioni %d:\n", i, con[i].cod, con[i].gestore.nome, con[i].gestore.cognome, aa);
		for(j=0, trovato=0; j<dim; j++){ 
			if(con[i].autom[j].anno==aa){
				trovato=1;
				printf("* mese %d: %s, %s\n", con[i].autom[j].mese, con[i].autom[j].model, con[i].autom[j].targa);
			}
		}
		if(!trovato)
			printf("Nessuna.\n");
	}

}  
