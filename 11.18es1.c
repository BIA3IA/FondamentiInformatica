/*Scrivere un programma che esegue due volte le seguenti elaborazioni.
Il programma chiede all'utente il numero di valori interi da
acquisire. Il programma alloca dinamicamente un array della
dimensione specificata e lo popola con i valori acquisiti da
tastiera. In seguito il programma visualizza la sequenza di valori
acquisiti al rovescio e libera la memoria allocata dinamicamente.
Visualizzare un errore nel caso si verifichi un errore di
allocazione della memoria.*/  

#include<stdio.h>
#include<stdlib.h>

int main() {
	int quanti, *num, *num2, i;

	scanf("%d", &quanti);

	num=malloc(sizeof(int)*quanti);

	if(num){
		for(i=0; i<quanti; i++)
			scanf("%d", &num[i]);
		for(i=quanti-1; i>=0; i--)
			printf("%d ", num[i]);
		printf("\n");
		free(num);
	} else 
		printf("ERRORE\n");

	scanf("%d", &quanti);

	num2=malloc(sizeof(int)*quanti);

	if(num2){
		for(i=0; i<quanti; i++)
			scanf("%d", &num2[i]);
		for(i=quanti-1; i>=0; i--)
			printf("%d 2", num2[i]);
		printf("\n");
		free(num2);
	} else 
		printf("ERRORE\n");
	

	
	return 0;
}
