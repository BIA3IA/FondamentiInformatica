/*Scrivere un programma che chiede all'utente una serie di numeri 
interi terminata dal valore 0 (che non fa parte della sequenza). Il 
programma stabilisce se la serie, se non vuota, è monotona crescente 
(non strettamente) e visualizza un apposito messaggio di testo. */

#include<stdio.h>


int main() {
	int n, prec, mon;

	scanf("%d", &prec);

	mon=1;
	if(prec!=0){
		scanf("%d", &n);

		while(n!=0 && mon){

			if (prec<=n){
				prec=n;
				scanf("%d", &n);
			} else 
				mon=0;
		} 

		if(mon)
			printf("Monotona crescente\n");
		else 
			printf("Non monotona crescente\n");

	} else
		printf ("Sequenza vuota\n");

	return 0;
}	