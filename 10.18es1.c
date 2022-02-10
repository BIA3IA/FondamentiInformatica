/*Si vuole realizzare un programma per la gestione di un archivio di
CD musicali (al massimo 100). Ogni CD è caratterizzato da un titolo
ed un autore (entrambe stringhe di al massimo 30 caratteri), un anno
di pubblicazione, il numero di tracce, la durata complessiva (in
termini di ore, minuti, secondi); inoltre si vuole memorizzare anche
il prezzo del cd (un valore float). Definire un tipo di dato per
rappresentare l'archivio di CD. 
In seguito scrivere un programma che chiede all'utente prima il numero 
di CD da inserire e poi i dati di ciascun CD (assumendo che l'utente
inserisca correttamente i dati).
Il programma visualizza i dati del cd di durata massima; se sono
presenti più cd di stessa durata massima il programma visualizzerà i
dati del primo di essi. 

VARIANTE: il programma visualizza i dati di tutti i CD di durata massima,
se ne sono stati trovati più di uno.
Il programma chiede in seguito il nome di un autore e visualizza i
titoli di tutti i CD pubblicati da questo.
Infine il programma
visualizza l'autore che ha pubblicato più CD (se più di uno con lo
stesso numero massimo di CD, si visualizzi il primo).*/
 
#include<stdio.h>

#define DIM 30
#define MAX 100
#define MINSEC 60
#define HSEC 3600

typedef struct{
	int ore, minuti, secondi;
} durata_t;

typedef struct{
	char titolo[DIM+1];
	char autore[DIM+1];
	int anno, n_tracce;
	durata_t durata;
	float prezzo;
} cd_t;

typedef struct{
	int n_cd;
	cd_t cd[MAX];
} archivio_t;

int main() {
	archivio_t archivio;
	int i, d_max, d_cor, max_i;

	do {
		printf("Numero cd:");
		scanf("%d", &archivio.n_cd);
	} while(archivio.n_cd<=0 || archivio.n_cd>MAX);

	for(i=0; i<archivio.n_cd; i++){
		printf("\nCd numero %d\nTitolo: ", i+1);
		scanf(" %[^\n]", archivio.cd[i].titolo);
		printf("Autore: ");
		scanf(" %[^\n]", archivio.cd[i].autore);
		printf("Anno: ");
		scanf("%d", &archivio.cd[i].anno);
		printf("Numero tracce: ");
		scanf("%d", &archivio.cd[i].n_tracce);
		printf("Prezzo: ");
		scanf("%f", &archivio.cd[i].prezzo);
		printf("Ore minuti secondi: ");
		scanf("%d %d %d", &archivio.cd[i].durata.ore, 
			&archivio.cd[i].durata.minuti, &archivio.cd[i].durata.secondi);
	}

	d_max=archivio.cd[0].durata.ore*HSEC+archivio.cd[0].durata.minuti*
		MINSEC+archivio.cd[0].durata.secondi;

	for(i=1, max_i=0; i<archivio.n_cd; i++){
		d_cor=archivio.cd[i].durata.ore*HSEC+archivio.cd[i].durata.minuti*
		MINSEC+archivio.cd[i].durata.secondi;
		if(d_cor>d_max){
			d_max=d_cor;
			max_i=i;
		}
	}

	printf("\nCD CON DURATA MASSIMA\nTitolo: %s\nAutore: %s\nNumero Tracce: %d\nAnno di pubblicazione: %d\nPrezzo: %f\nOre minuti e secondi: %d %d %d\n", 
		archivio.cd[max_i].titolo, archivio.cd[max_i].autore, archivio.cd[max_i].n_tracce, archivio.cd[max_i].anno, archivio.cd[max_i].prezzo, archivio.cd[max_i].durata.ore, archivio.cd[max_i].durata.minuti, archivio.cd[max_i].durata.secondi);
	
	return 0;
}
