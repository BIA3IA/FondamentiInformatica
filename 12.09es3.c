/*Scrivere un sottoprogramma che riceve come parametro la
testa di una lista di interi e la modifica sommando a ogni elemento
il valore di tutti gli elementi ad esso successivi (l'ultimo
elemento resta invariato), e restituisce la somma di tutti i valori
nella lista.
Es: Data la lista
l: 1->2->10->3->6
il sottoprogramma la modifica in
l: 22->21->19->9->6
e restituisce il valore 22*/

#include<stdio.h>
#include<stdlib.h>

typedef struct nodo_{
	int num;
	struct nodo_ *next;
} nodo_t;

int somma(nodo_t*);
nodo_t* aggiungicoda(nodo_t*, int);
void visualizza(nodo_t*);

int main() {
	int n, sum;
	nodo_t *lista;

	lista=NULL;

	scanf("%d", &n);
	while(n!=0){
		lista=aggiungicoda(lista, n);
		scanf("%d", &n);
	}  

	
	sum=somma(lista);
	printf("%d\n", sum);
	visualizza(lista);

	return 0;
}

int somma(nodo_t *list){
	nodo_t *tmp, *prec;
	int sum;

	for(prec=list; (*prec).next; prec=(*prec).next){
		for(tmp=(*prec).next; tmp; tmp=(*tmp).next)
			(*prec).num+=(*tmp).num;
	}

	return (*list).num;
}

nodo_t* aggiungicoda(nodo_t* lista, int num){
  nodo_t *prec;
  nodo_t *tmp;
  tmp = malloc(sizeof(nodo_t));
  if(tmp != NULL){
    tmp->next = NULL;
    tmp->num = num;
    if(lista == NULL)
      lista = tmp;
    else{
      for(prec=lista;prec->next!=NULL;prec=prec->next);
      prec->next = tmp;
    }
  } else
      printf("Memoria esaurita!\n");
  return lista;
}


void visualizza(nodo_t* lista){
  printf("Elementi nella lista: ");
  while(lista != NULL){
    printf("%d ", lista->num);
    lista = lista->next;
  }
  printf("\n");  
}
