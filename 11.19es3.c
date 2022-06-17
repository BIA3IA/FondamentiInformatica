/*Scrivere un programma che chiede all'utente una stringa di al
massimo 30 caratteri che rappresenta il nome di un file binario. Il
programma apre il file e verifica se è vuoto o meno stampando a
video il responso. Visualizzare un messaggio per eventuali errori di
apertura del file.*/

#include<stdio.h>

#define LUNS 30

int main() {
	char fn[LUNS+1];
	FILE *fp;
	char a;

	scanf("%s", fn);
	fp=fopen(fn, "rb");

	if(fp){
		if(fread(&a, sizeof(char), 1, fp))
			printf("File non vuoto\n");
		else
			printf("File vuoto\n");
	} else
		printf("ERRORE\n");
	
	return 0;
}  
