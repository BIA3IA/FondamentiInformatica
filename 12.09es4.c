/*Scrivere un sottoprogramma che riceve come parametri una stringa str
ed un numero n sicuramente compreso tra 1 e 10 estremi inclusi.
Assumendo che la stringa sia composta da cifre (caratteri!) comprese
tra '0' e la cifra corrispondente al valore intero n-1 il
sottoprogramma converte in intero, base dieci, il valore
rappresentato dalla stringa
in base n e restituisce il risultato. Nel caso la stringa contenga
un carattere
non ammissibile, il sottoprogramma restituisce -1.
Esempi:
Per str = '100', n = 2, il sottoprogramma restituisce il valore 4 (=
1*2^2)
Per str = '210', n = 3, il sottoprogramma restituisce il valore 21
(= 2*3^2 + 1*3^1)*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define LUNS 6
#define BASE 10

int convertinum(char[], int);
int potenza(int, int);

int main() {
	char str[LUNS+1]; 
	int n;

	scanf("%s %d", str, &n);

	printf("%d\n", convertinum(str, n));
	
	return 0;
}

int convertinum(char str[], int n){
	int num, i, ris, luns, cifr;

	luns=strlen(str);
	num=atoi(str);

	for(i=0, ris=0; i<luns; i++){
		cifr=num%BASE;
		num/=BASE;
		ris+=cifr*potenza(n, i);
	}

	return ris;
}

int potenza(int n, int e){
	int i;

	for(i=1; i<e; i++)
		n*=n;

	return n;
}