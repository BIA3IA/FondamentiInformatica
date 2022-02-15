/*Definiamo baricentro di un array di h elementi, l'elemento in
posizione i tale per cui:
v[0] + v[1] + ... + v[i] = v[i + 1] + v[i + 2] + ... + v[h - 1]
Scrivere un programma che chiede all'utente i dati di un array di
interi di 10 valori, calcola e visualizza l'indice dell'elemento che
fa da baricentro agli elementi dell'array, o -1 se questo non
esiste.
Se dovessero esserci più baricentri, il programma visualizza quello
più a sinistra.

Esempio 1:
se il vettore contiene i valori: 1 0 5 10 4 4 2 6 0 0
il programma visualizza il valore 3 (infatti la somma dei primi 4
elementi è uguale a 16 come quella degli ultimi 6 elementi).

Esempio 2:
se il vettore contiene i valori: 1 0 5 10 4 4 2 7 0 0
il programma visualizza il valore -1, non essendoci alcun
baricentro.*/

#include<stdio.h>

#define DIM 10

int main() {
	int v[DIM], i, j, dx, sx, baricentro;

	for(i=0; i<DIM; i++)
		scanf("%d", &v[i]);

	for(i=0, sx=0, baricentro=-1; i<DIM  && baricentro==-1; i++){
		sx+=v[i];
		dx=0;
		for(j=i+1, dx=0; j<DIM-1; j++){
		dx+=v[j];
		}
		if(dx==sx){
			baricentro=i;
		} 
	}

	printf("%d\n", baricentro);
	
	return 0;
}