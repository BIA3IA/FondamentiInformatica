/*Scrivere un programma che chiede all'utente di inserire un numero 
intero che corrisponde ad un anno e visualizza 1 se l'anno è 
bisestile, 0 altrimenti. NOTA: un anno è bisestile se è divisibile 
per 4 ma non per 100 o se è divisibile per 400.*/

#include<stdio.h>
#define COST 4
#define COST2 100
#define COST3 400

int main() {
	int anno;	
	
	scanf("%d", &anno);

	if (anno%COST==0 && anno%COST2!=0 || anno%COST3==0)
		printf("1");
	else
	printf("0");

	return 0;
}
