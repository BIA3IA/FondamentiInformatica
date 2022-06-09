/*Scrivere un sottoprogramma che riceve come parametri una matrice di
interi dichiarata nel chiamante con NC=10 colonne, e le dimensioni
di tale matrice. Il sottoprogramma chiede all'utente i dati per
popolare tale matrice.
Scrivere un sottoprogramma che riceve come parametri una matrice di
interi dichiarata nel chiamante con NC=10 colonne, e le dimensioni
di tale matrice. Il sottoprogramma visualizza sullo schermo il
contenuto della matrice.
Scrivere un programma che dichiara una matrice 10x10 di interi. Il
programma utilizza i due sottoprogrammi sopra definiti per acquisire
i dati dell'intera matrice e la visualizza. In seguito il programma
chiede all'utente le dimensioni di una sottomatrice della matrice
sopra dichiarata (si assuma che l'utente inserisca i due valori
correttamente). Il programma popola e visualizza la sottomatrice
mediante i due sottoprogrammi sopra definiti.*/

#include<stdio.h>
#define NC 10
#define NR 10

void input(int[][NC], int, int);
void output(int[][NC], int, int);


int main() {
	int m[NR][NC], nr, nc;

	input(m, NR, NC);
	output(m, NR, NC);

	printf("Fornire dimensioni: ");
	scanf("%d %d", &nr, &nc);
	printf("\n");

	input(m, nr, nc);
	output(m, nr, nc);
	
	return 0;
}


void input(int a[][NC], int nr, int nc){
	int i, j;

	for(i=0; i<nc; i++)
		for(j=0; j<nc; j++)
			scanf("%d", &a[i][j]);
	
}

void output(int a[][NC], int nr, int nc){
	int i, j;

	for(i=0; i<nc; i++){
		for(j=0; j<nc; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
