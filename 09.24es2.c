/*Scrivere un programma chiede all'utente un numero intero e ne 
visualizza il suo valore assoluto.*/

#include<stdio.h>

int main() {
	int numero;

	scanf("%d", &numero);
	
	if (numero<0)
	numero=-numero;
	
	printf("%d", numero);	
	
	return 0;
}	