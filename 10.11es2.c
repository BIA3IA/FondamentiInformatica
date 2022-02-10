/*Scrivere un programma che chiede all'utente 5 valori interi non
negativi e ne disegna l'istogramma a barre verticali orientate dal
basso verso l'alto come mostrato nel seguente esempio. Se l'utente
inserisce i valori: 1 4 5 2 1, il programma visualizzerà il seguente
output:
    *
  * *
  * *
  * * *
* * * * *
1 4 5 2 1   */

#include<stdio.h>
#define DIM 5

int main() {
	int a[DIM], i, j, altezza;

	for(i=0; i<DIM; i++)
		scanf("%d", &a[i]);

	for(altezza=a[0], i=1; i<DIM; i++){
		if(altezza<a[i])
			altezza=a[i];
	}

	for(i=0; i<altezza; i++){
		for(j=0; j<DIM; j++){
			if(a[j]<altezza-i)
				printf("  ");
			else 
				printf("* ");
		}
		printf("\n");
	}

	for(i=0; i<DIM; i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
} 
