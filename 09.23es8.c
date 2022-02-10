/*Scrivere un programma che acquisisce un carattere da tastiera 
(diverso da un a capo) e lo visualizza. In seguito il programma 
chiede un altro carattere (diverso da un a capo) e lo visualizza.*/

#include<stdio.h>

int main() {
	char car1, car2;

	scanf("%c", &car1);
	printf("%c\n", car1);

	scanf(" %c", &car2);
	printf("%c\n", car2);
	
	return 0;
}	