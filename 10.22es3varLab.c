/*Scrivere un programma che chiede un numero intero positivo e
nel caso in cui l'utente inserisca un numero non valido lo richiede.
Il programma visualizza in formato "abaco" il numero dalla cifra
meno significativa alla più significativa. Ad esempio se viene
inserito il numero 2134, il programma stamperà a video:
|****
|***
|*
|**
VARIANTE: modificare il programma in modo tale che visualizzi le
cifre dalla più significativa alla meno significativa. Quindi per il
numero 2134 il programma visualizza:
|**
|*
|***
|**** */

#include <stdio.h>
#define BASE 10

int main(){
	int n, i, tmp, cif
		
	do 
		scanf("%d", &n);
	while(n<=0);
	
	tmp=n;
	
	whille(n>0){
		n/=BASE;
	}
	
	???????????
		

	return 0;
}
