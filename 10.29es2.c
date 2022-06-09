/*Definire un tipo di dato strutturato per rappresentare una frazione
in termini di numeratore e denominatore (due numeri interi).
Scrivere un sottoprogramma che riceve come parametro passato per
indirizzo una frazione e la visualizza sullo schermo.
Scrivere un sottoprogramma che riceve come parametro passato per
indirizzo una variabile frazione, chiede all'utente numeratore e
denominatore (verificando la correttezza di quest'ultimo e nel caso
richiedendone il valore) e salva i due valori nella variabile
ricevuta come parametro.
Scrivere un sottoprogramma che riceve come parametro passato per
indirizzo una frazione e la semplifica.
Scrivere un programma che, mediante i sottoprogrammi sopra definiti,
chiede all'utente una frazione, la semplifica e mostra il risultato
a video. */

#include<stdio.h>

typedef struct{
	int num, den;
} frazione_t;

void output(frazione_t*);
void input(frazione_t*);
void semplifica(frazione_t*);
int min(int, int);

int main() {
	frazione_t fraz;

	input(&fraz);
	semplifica(&fraz);
	output(&fraz);
	
	return 0;
}

void output(frazione_t *frazione){
	printf("%d / %d\n", (*frazione).num, (*frazione).den);
} 

void input(frazione_t *frazione){

	do
		scanf("%d %d", &(*frazione).num, &(*frazione).den);
	while((*frazione).den==0);
}

void semplifica(frazione_t *frazione){
	int mcd;

	mcd=min((*frazione).num, (*frazione).den);
	while((*frazione).num%mcd || (*frazione).den%mcd)
		mcd--;
	(*frazione).num/=mcd;
	(*frazione).den/=mcd;

	if((*frazione).num<0 && (*frazione).den<0){
		(*frazione).num*=-1;
		(*frazione).den*=-1;
	} else if((*frazione).num>0 && (*frazione).den<0){
		(*frazione).num*=-1;
		(*frazione).den*=-1;
	}
}

int min(int num, int den){
	int min;

	if(num<den)
		min=num;
	else
		min=den;

	return min;
}
