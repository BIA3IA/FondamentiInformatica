/*Scrivere un programma che riceve come argomenti da riga di comando
il nome di un file di testo contenente una sequenza di lunghezza
indefinita di numeri interi ed un valore intero n. Il programma
legge dal file di testo i valori e stampa a video in ordine inverso
solo i valori inferiori ad n. Gestire opportunamente tutti i casi di
errore. Se necessario si supponga di avere a disposizione della
struttura dati e dei sottoprogrammi per la gestione delle liste
dinamiche.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct nodo_{
	int n;
	struct nodo_ *next;
} nodo_t;

nodo_t* aggiungiTesta(nodo_t*, int);
void visualizza(nodo_t*);
void distruggi(nodo_t*);

int main(int argc, char *argv[]) {
	FILE *fp;
	int n, num;
	nodo_t *lista;

	lista=NULL;

	if(argc==3){
		fp=fopen(argv[1], "r");
		n=atoi(argv[2]);
		if(fp){
			fscanf(fp, "%d", &num);
			while(!feof(fp)){
				if(num<n)
					aggiungiTesta(lista, num);
				fscanf(fp, "%d", &num);
			}
			fclose(fp);
			visualizza(lista);
			distruggi(lista);
		} else
			printf("Errore apertura file\n");
	} else
		printf("Argomenti errati\n");
	
	return 0;  
}

nodo_t* aggiungiTesta(nodo_t *list, int n){
	nodo_t *tmp;

	(*tmp).n=n;
	(*tmp).next=list;
	list=tmp;

	return list;
}

void visualizza(nodo_t *list){
	for(; list; list=(*list).next)
		printf("%d ", (*list).n);
	printf("\n");
}

void distruggi(nodo_t *list){
	nodo_t *tmp;

	while(list){
		tmp=list;
		list=(*list).next;
		free(tmp);
	}
}
