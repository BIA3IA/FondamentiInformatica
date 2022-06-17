/*Scrivere un programma che riceve da riga di comando un qualsivoglia
numero di argomenti. Il sottoprogramma visualizza su una singola
riga ciascun argomento ricevuto.*/

#include<stdio.h>

int main(int argc, char argv[]) {
	int i;

	for(i=0; i<argc; i++)
		printf("%s\n", argv[i]);
	
	return 0;
}