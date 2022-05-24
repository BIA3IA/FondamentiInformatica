/*Scrivere un programma che chiede all'utente una stringa di al
massimo 15 caratteri contenente soltanto lettere dell'alfabeto
minuscolo (si assuma che l'utente non commetta errori
nell'inserimento).
Il programma identifica e visualizza qual è la prima lettera
nell'ordinamento alfabetico che compare nella stringa e quante volte
vi compare.
Esempio
Se l'utente inserisce "cocci" il programma stampa "c 3"
Se l'utente inserisce "bacco" il programma stampa "a 1"
Se l'utente inserisce "tiene" il programma stampa "e 2"*/

#include <stdio.h>
#include<string.h>
#define MAX 15

int main(){
	char str[MAX], prima;
	int i, volte, len;

	scanf("%s", str);

	len=strlen(str);

	for(i=0, prima=str[0]; i<len; i++){
		if(str[i]<prima){
			prima=str[i];
			volte=1;
		} else if (str[i]==prima)
			volte++;
	}
	
	printf(" %c %d\n", prima, volte);

	return 0;

}