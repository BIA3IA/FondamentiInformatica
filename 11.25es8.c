/*Definire un nuovo tipo di dato per lista dinamica chiamata
nodo_compatto_t e contenente, oltre al puntatore next, due campi
chiamati n e volte; il primo campo indica l'effettivo valore
memorizzato nel nodo mentre il secondo quante volte compare quel
valore.
Scrivere un sottoprogramma che riceve come parametro una classica
lista dinamica di interi e costruisce la corrispondente lista
compatta.
Se per esempio la lista in ingresso è: 4 2 3 2 2 4, la lista
compatta sarà: (4,2) (2, 3) (3, 1). Infatti il valore 4 compare due
volte nella lista di partenza, il valore 2 tre volte e il valore 3
una volta.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct nodo_{
	int num;
	struct nodo_ *next;
}nodo_t;

typedef struct nodo2_{
	int num, volte;
	struct nodo2_ *next;
}nodo_compatto_t;

nodo_compatto_t* costruisce(nodo_t*);

int main() {
	
	return 0;
}

nodo_compatto_t* costruisce(nodo_t *list){
	nodo_compatto_t *list2;
	nodo_t *curr;
	int volte;
	
	list2=NULL;
	while(list){
		if(esistelemento(list2, list->num)){
			list=list->next;
		} else{
			for(curr=list->next, volte=1; curr; curr=curr->next){
					if(curr->num==list->num)
						volte++;
			}
			list2=aggiungicoda(list2, volte, list->num);
			list=list->next;
		}
	}
	
	return list2;
}