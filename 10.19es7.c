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
immutati. */

#include<stdio.h>

#define LUNS 20
#define PASSO 3

char cifra(char);
char decifra(char);
int verificalettera(char);

int main() {
	char str[LUNS+1], cifrato[LUNS+1], decifrato[LUNS+1];
	int i, lettera, uguali;

	scanf("%s", str);


	for(i=0; str[i]!='\0'; i++){
		lettera=verificalettera(str[i]);
		if(lettera)
			cifrato[i]=cifra(str[i]);
		else
			cifrato[i]=str[i];
	}

	cifrato[i]='\0';

	printf("Messaggio cifrato: %s\n", cifrato);

	for(i=0; str[i]!='\0'; i++){
		lettera=verificalettera(str[i]);
		if(lettera)
			decifrato[i]=decifra(cifrato[i]);
		else
			decifrato[i]=cifrato[i];
	}

	decifrato[i]='\0';

	printf("Messaggio decifrato: %s\n", decifrato);

	for(i=0, uguali=1; str[i]!='\0' && uguali; i++){
		if(str[i]!=decifrato[i])
			uguali=0;
	}

	printf("Esito Test: %d\n", uguali);
	
	return 0;
}

char cifra(char decifr){
	char cifr;

	cifr=(decifr-'a'+PASSO)%('z'-'a'+PASSO)+'a';

	return cifr;
}

char decifra(char cifr){
	char decifr;

	decifr=(cifr-'a'-PASSO)%('z'-'a'-PASSO)+'a';

	return decifr;
}

int verificalettera(char car){
	int lettera;

	if(car>='a' && car<='z')
		lettera=1;
	else
		lettera=0;
	
	return lettera;
}
