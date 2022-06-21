/*Utilizzando la definizione di tipo lista e i sottoprogrammi visti a
lezione, scrivere un sottoprogramma che ricevute in ingresso due
liste, ne restituisce una nuova creata alternando gli elementi delle
due liste, e poi mettendo in coda tutti quelli della lista più
lunga. Ad esempio, se le liste in ingresso sono fatte come segue,
1 3 5 7 9 11
2 4 6 8
la lista creata sarà fatta come segue
1 2 3 4 5 6 7 8 9 11*/

#include<stdio.h>
#include<stdlib.h>

typedef struct nodo_{    
	int num;
	struct nodo_ *next;
}nodo_t;

nodo_t* combina(nodo_t*, nodo_t*);

int main() {

	return 0;
}

nodo_t* combina(nodo_t *l1, nodo_t *l2){
	nodo_t *lista;

	lista=NULL;
	while(l1 || l2){
		if(l1){
		lista=inseriscicoda(lista, (*l1).num);
		l1=(*l1).next;
		}
		if(l2){
			lista=inseriscicoda(lista, (*l2).num);
			l2=(*l2).next;
		}
	}

	return lista;
}
