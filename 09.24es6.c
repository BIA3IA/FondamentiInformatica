/*Scrivere un programma che acquisisce due numeri interi e stampa a 
video il maggiore dei due*/

#include<stdio.h>

int main() {
	int n1, n2;

	scanf("%d %d", &n1, &n2);

		if (n1>n2)
			printf("%d\n", n1);
		else
			printf("%d\n", n2);
	
	return 0;
}	