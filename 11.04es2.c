/*Scrivere un sottoprogramma che riceve in ingresso un array
bidimensionale di interi mat (dichiarato nel chiamate con NCOL=10),
un intero val e qualsiasi parametro ritenuto strettamente necessario
e trasmette al chiamate gli indici di riga e colonna che
identificano la posizione del primo elemento (scandendo l'array per
righe) che, sommato a tutti i suoi precedenti, dia come risultato un
valore > val. Nel caso in cui tal elemento non esista, si
trasmettono i valori -1, -1.*/

#include<stdio.h>

#define NCOL 10

void magg(int mat[][NCOL], int, int, int, int*, int*);

int main() {
	
	return 0;
}

void magg(int mat[][NCOL], int nrig, int ncol, int val, int *i, int *j){
	int x, y, trovato, ris;

	for(x=0, ris=0, trovato=0; x<nrig && !trovato; x++){
		for(y=0; y<ncol; y++){
			if(ris+=mat[x][y]>val){
				*i=x;
				*j=y;
				trovato=1;
		}
	}

	if(!trovato){
		*i=-1;
		*j=-1;
	}
}