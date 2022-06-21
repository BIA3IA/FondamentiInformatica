/*Scrivere un sottoprogramma che riceve come parametri una lista
dinamica di interi ordinata in ordine crescente ed un valore intero.
Il sottoprogramma inserisce il nuovo elemento nella lista
preservando l'ordine crescente e restituisce la testa della lista al
chiamante. */

#include<stdio.h>
#include<stdlib.h>

typedef struct nodo_{
	int num;
	struct nodo_ *next;
} nodo_t;

nodo_t* aggiungiinordine(nodo_t*, int);

int main() {
	
	return 0;
}

nodo_t* aggiungiinordine(nodo_t *list, int n){
	nodo_t *curr, *prec, *tmp;
	int trovato;

	tmp=malloc(sizeof(nodo_t));
	if(tmp){
		(*tmp).num=n;
		(*tmp).next=NULL;
		if(list){
			for(prec=list, curr=(*list).next, trovato=0; curr && !trovato; prec=(*prec).next, curr=(*curr).next){
				if(n<=(*curr).num && n>=(*prec).num){
					trovato=1;
					(*tmp).next=curr;
					(*prec).next=tmp;
				}
			}
		} else { 
			(*tmp).next=list;
			list=tmp;
		}    
	} else
		printf("Errore\n");

	return list;
} 
