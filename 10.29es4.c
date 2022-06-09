/*Scrivere un sottoprogramma che riceve in ingresso un array
bidimensionale di interi (dichiarato con NC=5 colonne) e le
dimensioni effettive della parte della matrice utilizzata. Il
sottoprogramma calcola la media dei valori contenuti nella matrice e
trasmette al chiamante le coordinate del valore più vicino alla
media. Se più valori hanno stessa distanza minima selezionare
l'ultimo.
Scrivere un programma che chiede all'utente i dati di una matrice
5x5 di interi, invoca il sottoprogramma sopra definito e visualizza
i risultati.*/

#include<stdio.h>
#define NC 5
#define NR 5

void media(int[][NC], int, int, int*, int*);

int main() {
	int m[NR][NC], i, j, r, c;

	for(i=0; i<NR; i++)
		for(j=0; j<NC; j++)
			scanf("%d", &m[i][j]);

	media(m, NR, NC, &r, &c);

	printf("%d %d\n", r, c);
	
	return 0;
}

void media(int m[][NC], int nr, int nc, int *r, int *c){
	int i, j, sum, media, diff;

	for(i=0, sum=0; i<nr; i++)
		for(j=0; j<nc; j++)
			sum+=m[i][j];

	media=sum/(nr*nc);
	diff=media;

	for(i=0, sum=0; i<nr; i++){
		for(j=0; j<nc; j++){
			if(m[i][j]>media){
				if(m[i][j]-media<=diff){
					*r=i+1;
					*c=j+1;
					diff=m[i][j]-media;
				}
			} else if(m[i][j]<media){
				if(media-m[i][j]<=diff){
					*r=i+1;
					*c=j+1;
					diff=media-m[i][j];
				}
			} else{
				*r=i+1;
				*c=j+1;
				diff=0;
			}
		}
	}
}

// i e j +1 perche voglio le coord matematiche, non degli array