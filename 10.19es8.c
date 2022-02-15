/*Definire un tipo di dato struct per rappresentare una frazione in
termini di numeratore e denominatore (due numeri interi).
Scrivere un sottoprogramma che chiede all'utente una frazione valida
(denominatore diverso da zero) e la restituisce al chiamate; nel
caso la condizione non sia soddisfatta il sottoprogramma richiede di
nuovo all'utente di inserire dei valori validi.
Scrivere un sottoprogramma che riceve come parametro una frazione e
la semplifica spostando l'eventuale segno meno al numeratore e la
restituisce al chiamante.
Scrivere un sottoprogramma che riceve come parametri due frazioni,
ne esegue la somma, semplifica il risultato (mediante la funzione
precedentemente definita) e restituisce il risultato.
Scrivere un sottoprogramma che riceve come parametri due frazioni,
ne esegue la moltiplicazione, semplifica il risultato (mediante la
funzione precedentemente definita) e restituisce il risultato.
Scrivere un sottoprogramma che riceve come parametro una frazione e
la stampa a video.
Scrivere un programma che mediante l'ausilio dei sottoprogrammi
sopra definiti, chiede all'utente due frazioni le somma e le
moltiplica e visualizza i due risultati.*/

#include<stdio.h>

typedef struct{
	int num;
	int den;
} frazione_t;

frazione_t input();
frazione_t semplifica(frazione_t);
frazione_t somma(frazione_t, frazione_t);
frazione_t moltiplicazione(frazione_t, frazione_t);
void output(frazione_t);

int main() {
	frazione_t fraz1, fraz2;

	fraz1=input();
	fraz2=input();
	output(somma(fraz1, fraz2));
	output(moltiplicazione(fraz1, fraz2));
	
	return 0;
}

frazione_t input(){
	frazione_t frazione;
	do{
		scanf("%d %d", &frazione.num, &frazione.den);
	} while (frazione.den==0);
	return frazione;
}

frazione_t semplifica(frazione_t frazione){
	int meno, mcd;

	if(frazione.num<0){
		meno=1;
		frazione.num=-frazione.num;
	} else 
		meno=0;
	if(frazione.den<0){
		meno=!meno;
		frazione.den=-frazione.den;
	} 

	if(frazione.num<frazione.den){
		mcd=frazione.num;
	} else 
		mcd=frazione.den;
	
	while(frazione.num%mcd || frazione.den%mcd)
		mcd--;

	frazione.num/=mcd;
	frazione.den/=mcd;

	if(meno)
		frazione.num=-frazione.num;

	return frazione;
}

frazione_t somma(frazione_t fraz1, frazione_t fraz2){
	frazione_t ris;
	ris.num=fraz1.num*fraz2.den+fraz2.num*fraz1.den;
	ris.den=fraz1.den*fraz2.den;
	ris=semplifica(ris);
	return ris;
}

frazione_t moltiplicazione(frazione_t fraz1, frazione_t fraz2){
	frazione_t ris;
	ris.num=fraz1.num*fraz2.num;
	ris.den=fraz1.den*fraz2.den;
	ris=semplifica(ris);
	return ris;
}

void output(frazione_t frazione){
	printf("%d / %d\n", frazione.num, frazione.den);
}