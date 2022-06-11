/*Scrivere un sottoprogramma che riceve come parametri
1) una stringa line,
2) una matrice di char tokens per ospitare una lista di parole
ciascuna di lunghezza massima pari a 15 caratteri,
3) una variabile wMax indicante il numero di righe della matrice
tokens, ed
4) un intero wNum passato per indirizzo.
Assumendo che 1) line sia una frase composta da parole separate
soltanto da uno spazio e non contenente spazi extra all'inizio e
alla fine, e 2) ciascuna parola sia di al massimo 15 caratteri, il
sottoprogramma salva su ciascuna riga di tokens le parole contenute
in line. Inoltre se line contiene più di wMax parole, le parole in
eccesso vengono scartate. Infine il sottoprogramma trasmette al
chiamate tramite il parametro wNum il numero effettivo di parole
memorizzate in tokens.
Scrivere un programma che chiede all'utente una stringa di al
massimo 150 caratteri ed invoca il sottoprogramma sopra definito per
separare le parole salvandole in una matrice per contenere al
massimo 12 parole da 15 caratteri ciascuna (quindi 12x16!). Il
programma infine visualizza la lista di parole individuate.
VARIANTE: ciascuna parola in line può anche essere più lunga di 15
caratteri. In tal caso il sottoprogramma deve troncare la parola
quando la salva in tokens (ad esattamente 15 caratteri), scartando
gli eventuali caratteri in eccesso.*/

#include<stdio.h>

#define LUNS 150
#define NR 12
#define NC 15

void separa(char[], char[][NC+1], int, int*);

int main() {
	char str[LUNS+1], mat[NR][NC+1];
	int num, i;

	scanf("%[^\n]", str);
	separa(str, mat, NR, &num);

	for(i=0; i<num; i++)
		printf("%s\n", mat[i]);
	
	return 0;
}

void separa(char line[], char tokens[][NC+1], int wMax, int *wNum){
	int i, j;

	for(i=0, j=0, *wNum=0; line[i]!='\0' && *wNum<wMax; i++){
		if(line[i]==' '){
			tokens[*wNum][j]='\0';
			j=0;
			(*wNum)++;
		} else {
			tokens[*wNum][j]=line[i];
			j++;
		}
	}

	if(*wNum<wMax){
		tokens[*wNum][j]='\0';
		(*wNum)++;
	}
}