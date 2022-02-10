/*Scrivere un programma che acquisito un numero intero visualizza il 
messaggio "positivo", "negativo" o "nullo" in base al valore.*/

#include<stdio.h>

int main() {
	int numero;

	scanf("%d", &numero);

	if (numero<0)
		printf("NEGATIVO");
	else if (numero==0)
		printf("NULLO");
	else
		printf("POSITIVO");
	
	return 0;
}	