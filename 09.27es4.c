/*Scrivere un programma che acquisisce tre numeri in virgola mobile e 
verifica se la terna può rappresentare le dimensioni dei lati di un 
triangolo: devono essere valori positivi; inoltre la somma di due 
numeri deve essere maggiore del terzo. Se il controllo è stato 
superato con successo, il programma stabilisce che tipo di triangolo 
è isoscele, equilatero o scaleno e stampa un apposito messaggio a 
video. Altrimenti, il programma deve stampare un apposito messaggio 
di errore.*/

#include<stdio.h>

int main() {
	float a, b, c;

	scanf("%f %f %f", &a, &b, &c);

	if (a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
		if (a==b && b==c && c==a)
			printf("EQUILATERO\n");
		else if (a==b || b==c | c==a)
			printf("ISOSCELE\n");
		else 
			printf("SCALENO\n");

	return 0;
}
