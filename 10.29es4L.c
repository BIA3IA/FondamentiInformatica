/*Scrivere un programma che chiede all'utente la dimensione m di
due matrici quadrate di interi A e B (un valore intero compreso tra
1 e 10 e nel caso non sia valido va richiesto) e poi i dati per
popolare le due matrici.
Per ogni valore n compreso tra 2 e m (estremi inclusi), il programma
calcola e stampa le coordinate (i,j) dell'angolo in alto a sinistra
di tutte le sottomatrici quadrate nxn di A e B che soddisfano
entrambe le seguenti condizioni:
- hanno la stessa posizione (i,j) in entrambe le matrici A e B
- la sottomatrice definita su A e la sottomatrice definita su B sono
uguali (contengono gli stessi elementi, posizione per posizione)
Esempio:
Date le matrici
A: B:
5 3 7 1 8 0 3 7 0 1
3 9 2 7 1 0 9 2 7 0
3 9 7 5 6 3 9 7 5 1
4 5 7 1 3 4 5 7 1 0
8 6 2 9 9 1 0 0 9 1
L'output del programma sarà
N=2
(0, 1) (1, 1) (1, 2) (2, 0) (2, 1) (2, 2)
N=3
(1, 1)
N=4
Nessuna sottomatrice soddisfa le condizioni
N=5
Nessuna sottomatrice soddisfa le condizioni*/

#include<stdio.h>

#define MAX 10

int main(){
	int mata[MAX][MAX], matb[MAX][MAX], m, n;
	int x, y, eq, sol, i, j;

	do{
		printf("Dimensione: ");
		scanf("%d", &m);
		printf("\n");
	} while(m<1 || m>10);

	for(i=0; i<m; i++)
		for(j=0; j<m; j++)
			scanf("%d ", &mata[i][j]);

	printf("\n");

	for(i=0; i<m; i++)
		for(j=0; j<m; j++)
			scanf("%d ", &matb[i][j]);

	printf("\n");

	do 
		scanf("%d", &n);
	while(n<2 || n>m);

	for(i=0, sol=0; i<m-n; i++){
		for(j=0; j<m-n; j++){
			for(x=0, eq=1; x<n && eq; x++){
				for(y=0; y<n && eq; y++){
					if(mata[i+x][j+y] != matb[i+x][j+y])
						eq = 0;
					else
						sol++;	
				}
			} if(eq)
				printf("(%d, %d) ", i, j);
		}
	}

	if(!sol)
		printf("Nessuna soluzione");
	printf("\n");
	
	return 0;
}