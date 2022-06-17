/*Dopo aver definito un nuovo tipo di dato per memorizzare una listaFdinamica di valori interi, realizzare i seguenti sottoprogrammi
nelle versioni sia iterativa che ricorsiva.
* Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi e ne visualizza il contenuto.
* Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi e ne restituisce la lunghezza.
* Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi ed un intero. Il sottoprogramma restituisce 1 se
il numero è presente nella lista altrimenti 0.
* Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi ed un intero. Il sottoprogramma restituisce il
puntatore al primo nodo della lista avente valore pari al secondo
parametro ricevuto; se il numero non è presente restituisce NULL.
* Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi ed un intero. Il sottoprogramma inserisce in
testa il numero ricevuto come parametro e restituisce la nuova testa
della lista.
* Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi ed un intero. Il sottoprogramma inserisce in coda
il numero ricevuto come parametro e restituisce la testa della
lista.
* Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi ed un intero. Il sottoprogramma cancella dalla
lista il primo nodo dalla testa contenente il valore intero ricevuto
come parametro, se presente, e restituisce la testa della lista.
* Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi ed un intero. Il sottoprogramma cancella dalla
lista tutti i nodi contenenti il valore intero ricevuto come
parametro, se presente, e restituisce la testa della lista.
* Scrivere un sottoprogramma che riceve una testa di una lista
dinamica e cancella tutti gli elementi presenti.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct nodo_{
	int num;
	struct nodo_ *next;
} nodo_t;

void visualizza(nodo_t*);

int lunghezza(nodo_t*);
int lunghezza2(nodo_t*);

int esisteElemento(nodo_t*, int);

nodo_t* ricercaElemento(nodo_t*, int);

nodo_t* inserisciTesta(nodo_t*, int);

nodo_t* inserisciCoda(nodo_t*, int);

nodo_t* eliminaElemento(nodo_t*, int);

nodo_t* eliminaTutti(nodo_t*, int);

nodo_t* cancellaTesta(nodo_t*);

nodo_t* distruggi(nodo_t*);


int main() {
	nodo_t *lista1, *lista2, *lista3, *curr;
	int n;

	lista1=NULL;
	lista2=NULL;
	lista3=NULL;

	scanf("%d", &n);
	while(n!=0){
		lista1=inserisciCoda(lista1, n);	
		scanf("%d", &n);
	}
	
	scanf("%d", &n);
	while(n!=0){
		lista2=inserisciCoda(lista2, n);	
		scanf("%d", &n);
	}

	for(curr=lista1; curr; curr=(*curr).next){
		if(esisteElemento(lista2, (*curr).num) && !esisteElemento(lista3, (*curr).num)){
			lista3=inserisciCoda(lista3, (*curr).num);
		}
	}

	
	visualizza(lista3);

	lista3=cancellaTesta(lista3);

	visualizza(lista3);

	lista1 = distruggi(lista1);
	lista2 = distruggi(lista2);
	lista3 = distruggi(lista3);
	
	return 0;
}

void visualizza(nodo_t *list){
	
	while(list){
		printf("%d ", (*list).num);
		list=(*list).next;
	}
	printf("\n");
}

int lunghezza(nodo_t *list){
	int lun;

	lun=0;
	while(list){
		lun++;
		list=(*list).next;
	}

	return lun;
}

int lunghezza2(nodo_t *list){
  int lun;
  for(lun=0; list; lun++, list=(*list).next);
  return lun;
}


int esisteElemento(nodo_t *list, int n){

	for(; list && (*list).num!=n; list=(*list).next);

	return(list!=NULL);
}


nodo_t* ricercaElemento(nodo_t *list, int n){

	for(; list && (*list).num!=n; list=(*list).next);

	return list;
}


nodo_t* inserisciTesta(nodo_t *list, int num){
	nodo_t *tmp;

	tmp=malloc(sizeof(nodo_t));
	if(tmp){
		(*tmp).num=num;
		(*tmp).next=list;
		list=tmp;
	} else
		printf("ERRORE\n");

	return list;
}

nodo_t* inserisciCoda(nodo_t *list, int num){
	nodo_t *tmp, *prec;

	tmp=malloc(sizeof(nodo_t));
	if(tmp){
		(*tmp).num=num;
		(*tmp).next=NULL;
		if(list==NULL)
			list=tmp;
		else{
			for(prec=list; (*prec).next!=NULL; prec=(*prec).next);
			(*prec).next=tmp;
		}
	} else
		printf("ERRORE\n");

	return list;
}


nodo_t* eliminaElemento(nodo_t *list, int num){
	nodo_t *prec, *curr;

	curr=list;
	prec=NULL;
	while(curr && (*curr).num!=num){
		prec=curr;
		curr=(*curr).next;
	}
	if(curr){
		if(prec)
			(*prec).next=(*curr).next;
		else
			list=(*curr).next;
		free(curr);
	}
	return list;
}

nodo_t* eliminaTutti(nodo_t *list, int num){
	nodo_t *prec, *curr, *canc;

	curr=list;
	prec=NULL;
	while(curr){
		if((*curr).num==num){
			canc=curr;
			curr=(*curr).next;
			if(prec)
				(*prec).next=curr;
			else
				list=curr;
			free(canc);
		} else{
			prec=curr;
			curr=(*curr).next;
		}
	}

	return list;
}

nodo_t* distruggi(nodo_t *list){
	nodo_t *tmp;

	while(list){
		tmp=list;
		list=(*list).next;
		free(tmp);
	}

	return NULL;
}

nodo_t* cancellaTesta(nodo_t *list){
	nodo_t *tmp;

	tmp = list;
	list = (*list).next;
	free(tmp);

	return list;
}