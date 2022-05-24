/*Scrivere un programma che calcola il prodotto tra due polinomi di
grado massimo 8. Il programma chiede prima il grado (e nel caso di
valore non valido lo richiede) ed i coefficienti di ciascuno dei due
polinomi (i coefficienti sono valori interi). In seguito esegue il
prodotto polinomiale e visualizza i coefficienti del polinomio
risultato.*/

#include<stdio.h>
#define DIM 8

int main() {
	int a[DIM+1], b[DIM+1], r[DIM+1], i, j, grado, grado2, grado3;

	do(scanf("%d", &grado));
	while(grado<0 || grado>8);

		do(scanf("%d", &grado2));
	while(grado2<0 || grado>8);

	for(i=0; i<=grado; i++)
		scanf("%d", &a[i]);

	for(i=0; i<=grado2; i++)
		scanf("%d", &b[i]);

	grado3=grado+grado2;

	for(i=0; i<=grado3; i++)
		r[i]=0;

	for(i=0; i<=grado; i++){
		for(j=0; j<=grado2; j++){
			r[i+j]+=a[i]*b[j];
		}
	}
		

	for(i=0; i<=grado3; i++)
			printf("%d  ", r[i]);
	
	printf("\n");

	return 0;
}