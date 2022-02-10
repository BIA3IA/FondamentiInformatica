/*Scrivere un programma che realizza le funzionalità base di una 
calcolatrice. Il programma chiede all'utente due numeri in virgola 
mobile ed un carattere che rappresenta l'operazione che si vuole 
eseguire (+ - * /). Il programma esegue l'operazione richiesta e 
visualizza il risultato. Nel caso l'utente inserisce un carattere 
che non rappresenta alcuna operazione ammissibile, il programma 
visualizza un messaggio di errore.*/

#include<stdio.h>

int main() {
	float a, b, c;
	char operazione;

	scanf("%f %f %c", &a, &b, &operazione);


	if (operazione=='+'){
		c=a+b;
		printf("risultato = %f\n", c);
	} else if (operazione=='-'){
		c=a-b;
		printf("risultato = %f\n", c);
	} else if (operazione=='*'){
		c=a*b;
		printf("risultato = %f\n", c);
	} else if (operazione=='/'){
		c=a/b;
		printf("risultato = %f\n", c);
	} else 
		printf("operazione non valida\n");
	
	return 0;
}
