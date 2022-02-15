/*Il cifrario di Cesare è uno dei più antichi algoritmi crittografici
di cui si abbia traccia storica. È un cifrario a sostituzione
monoalfabetica in cui ogni lettera del testo in chiaro è sostituita
nel testo cifrato dalla lettera che si trova un certo numero di
posizioni dopo nell'alfabeto. Cesare utilizzava uno spostamento di 3
posizioni:
Cifratura: A->D, B->E, ..., X->A, Y->B, Z->C
Decifratura: D->A, E->B, ...,
Scrivere un sottoprogramma cifra() che riceve come parametro un
carattere minuscolo dell'alfabeto inglese e restituisce il carattere
minuscolo cifrato.
Scrivere un sottoprogramma decifra() che riceve come parametro un
carattere minuscolo dell'alfabeto inglese già cifrato e restituisce
il corrispondente carattere minuscolo non cifrato.
Scrivere un sottoprogramma verificalettera() che riceve come
parametro un carattere e restituisce 1 se tale carattere è una
lettera dell'alfabeto minuscolo, altrimenti 0.
Scrivere un programma che acquisisce una stringa di testo di al
massimo 20 caratteri, che si assume contenga soltanto lettere
minuscole dell'alfabeto, cifre ed altri segni di interpunzione e non
lettere maiuscole. Mediante l'ausilio dei sottoprogrammi sopra
definiti, il programma cifra il messaggio salvandolo in un secondo
array e lo stampa a video; in seguito, il programma decifra il
messaggio cifrato, lo stampa a video e verifica che effettivamente è
uguale al messaggio originale, visualizzando l'esito del confronto.
NOTA: nella cifratura/decifratura vanno cifrate/decifrate soltanto
le lettere dell'alfabeto mentre il resto dei caratteri rimangono
immutati.*/

#include<stdio.h>

#define PASSO 3
#define DIM 20

char cifra(char);
char decifra(char);
int verificalettera(char);


int main() {
	char input[DIM+1], cifrato[DIM+1], decifrato[DIM+1];
	int lettera, i, uguali;

	scanf("%s", input);
	for(i=0; input[i]!='\0'; i++){
		lettera=verificalettera(input[i]);
		if(lettera){
			cifrato[i]=cifra(input[i]);
		} else{
			cifrato[i]=input[i];
		}
		lettera=1;
	}
	cifrato[i]='\0';
	printf("%s\n", cifrato);

	for(i=0; cifrato[i]!='\0'; i++){
		lettera=verificalettera(cifrato[i]);
		if(lettera){
			decifrato[i]=decifra(cifrato[i]);
		} else{
			decifrato[i]=cifrato[i];
		}
		lettera=1;
	}
	decifrato[i]='\0';
	printf("%s\n", decifrato);

	for(i=0, uguali=1; input[i]!='\0' && decifrato[i]!='\0' && uguali; i++){
		if(input[i]!=decifrato[i]){
			uguali=0;
		}
	}

	if(uguali)
		printf("corrispondono\n");

	return 0;
}

char cifra(char in){
	char out;
	out=(in-'a'+PASSO)%('z'-'a'+PASSO)+'a';
	return out;
}

char decifra(char in){
	char out;
	out=(in-'a'-PASSO)%('z'-'a'-PASSO)+'a';
	return out;
}

int verificalettera(char in){
	int out;
	if(in>='a' && in<='z')
		out=1;
	else
		out=0;

	return out;
}