/*Utilizzando la definizione di tipo lista e i sottoprogrammi visti a
lezione, scrivere un sottoprogramma listaMedie() che riceve in
ingresso una lista l1 di numeri interi. Il sottoprogramma costruisce
una nuova lista l2 in cui ogni elemento è calcolato come la media
tra un valore di l1 ed il suo successivo. L'ultimo elemento della
lista, per cui non esiste un elemento successivo, viene ricopiato
nella nuova lista. Infine il sottoprogramma restituisce la nuova
lista.
Esempio: se l1 = 8 5 16 7 allora la nuova lista sarà: 6 10 11 7*/

#include<stdio.h>
#include<stdlib.h>

typedef struct nodo_{
	int num;
	struct nodo_ *next;
} nodo_t;

nodo_t* listaMedie(nodo_t*);

int main() {

	return 0;
}

nodo_t* listaMedie(nodo_t *l1){
	nodo_t *l2 , *curr, *prec;

	l2=NULL;
   
	if(l1){
		for(curr=(*l1).next, prec=l1; (*prec).next; prec=(*prec).next, curr=(*curr).next){
			(*prec).num=((*curr).num+(*prec).num)/2;
		}
		l2=l1;
	}

	return l2;
}
