/*Utilizzando la definizione di tipo lista e i sottoprogrammi visti a
lezione, scrivere un sottoprogramma che riceve una lista dinamica di
numeri l1 e da questa costruisce una nuova lista l2 come segue: gli
elementi di l1 vengono presi a coppie e viene inserito prima il
secondo elemento della coppia e poi il primo. Nel caso la lista l1
contenga un numero dispari di elementi, l'ultimo elemento viene
semplicemente copiato alla fine di l2. Esempio:
l1 = 1 2 3 4 5 6 7
l2 = 2 1 4 3 6 5 7*/

#include<stdio.h>
#include<stdlib.h>

typedef struct nodo_{
	int num;
	struct nodo_ *next;
}nodo_t;

nodo_t* scambiacoppie(nodo_t*);

int main() {
	
	return 0;
}

nodo_t* scambiacoppie(nodo_t *list){
	nodo_t *list2, *prec, *curr;

	list2=NULL;

	if(list){
		prec=list;
		curr=(*list).next;
		while(curr){
			list2=inseriscicoda(list2, (*curr).num);
			list2=inseriscicoda(list2, (*prec).num);
			prec=(*curr).next;
			if(prec)
				curr=(*prec).next;
			else
				curr=NULL;	
		}
		if(!curr && prec)
			list2=inseriscicoda(list2, (*prec).num);
	}

	return list2;
}