/*Scrivere un programma che riceve come argomenti da riga di comando
due numeri interi. Il programma visualizza la somma dei due valori.
Nel caso l'utente abbia specificato in modo errato il numero di
argomenti richiesto il programma visualizza un messaggio di errore.*/

#include<stdio.h>

int main(int argc, char *argv[]) {
	int n1, n2; 

	if(argc==3){
		n1 = atoi(argv[1]); /* atoi converte stringhe di soli numeri in numeri -> importare stdlib.h*/
		n2 = atoi(argv[2]);
		printf("%d + %d = %d\n", n1, n2, n1+n2);
	} else
		printf("Argomenti errati\n");
	
	return 0;
}