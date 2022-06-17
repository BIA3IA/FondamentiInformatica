/*Dichiarare un nuovo tipo di dato di tipo basato sul modello della
lista concatenata per memorizzare una sequenza di lunghezza
indefinita di numeri interi.
Scrivere un programma che svolge le seguenti elaborazioni:
- chiede all'utente una sequenza di lunghezza indefinita di numeri
interi positivi terminata da un valore non valido e la salva in una
lista utilizzando un inserimento di ogni nuovo elemento in testa
alla lista.
- visualizza il contenuto della lista.
- libera la memoria allocata dinamicamente per la lista.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct nodo_ {
	int n;
	struct nodo_ *next;
} nodo_t;

int main() {
	nodo_t *h, *tmp;
	int n;

	h=NULL;
	scanf("%d", &n);

	while(n>0){
		tmp=malloc(sizeof(nodo_t));
		if(tmp){
			(*tmp).n=n;
			(*tmp).next=h;
			h=tmp;
		} else
			printf("Errore\n");
		scanf("%d", &n);
	}

	for(tmp=h; tmp; tmp=(*tmp).next){
		printf("%d\n", (*tmp).n);
	}

	while(h){
		tmp=h;
		h=(*h).next;
		free(tmp);
	}	

	return 0;
}