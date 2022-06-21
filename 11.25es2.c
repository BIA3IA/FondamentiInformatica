/*Scrivere un sottoprogramma che riceve come parametri una lista di
interi ed una stringa che rappresenta il nome di un file. Il
sottoprogramma apre in scrittura il file binario il cui nome è stato
ricevuto come parametro e vi salva il contenuto della lista.*/

#include<stdio.h>

typedef struct nodo_{
	int num;
	struct nodo_ *next;
} nodo_t;

void scrittura(nodo_t*, char[]);

int main() {
	
	return 0;
}

void scrittura(nodo_t *list, char name[]){
	FILE *fp;

	fp=fopen(name, "wb");
	if(fp){
		while(list){
			fwrite(&(*list).num, sizeof(int), 1, fp);
			list=(*list).next;  
		} 
		fclose(fp);
	} else
		printf("Errore apertura file\n");
}
