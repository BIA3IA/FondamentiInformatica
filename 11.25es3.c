/*Scrivere un sottoprogramma che riceve come parametro una stringa che
rappresenta il nome di un file che contiene una sequenza di
lunghezza indefinita di numeri interi. Il sottoprogramma apre in
lettura il file binario e crea una nuova lista dinamica popolandola
con il contenuto del file. Il sottoprogramma restituisce infine la
testa della nuova lista creata.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct nodo_{
	int num;
	struct nodo_ *next;
} nodo_t;

nodo_t* scrivisulista(char[]);

int main() {
	
	return 0;
}

nodo_t* scrivisulista(char name[]){
	FILE *fp;
	nodo_t *list;
	int n;

	list=NULL;

	fp=fopen(name, "rb");
	if(fp){
		fread(&n, sizeof(int), 1, fp);
		while(!feof(fp)){
			list=inseriscicoda(list, n);
			fread(&n, sizeof(int), 1, fp);
		}
		fclose(fp);
	} else
		printf("Errore\n");

	return list;
}

