/*Scrivere un programma che acquisisce una stringa di al più 30
caratteri, la copia al rovescio in un secondo array e visualizza il
risultato.*/

#include<stdio.h>

#define LUNS 30

int main() {
	char str1[LUNS+1], str2[LUNS+1];
	int i, len;

	scanf("%s", str1);
	for(i=0; str1[len]!='\0'; len++);

	for(i=0; str1[i]!='\0'; i++)
		str2[len-1-i]=str1[i];

	str2[len]='\0';

	printf("%s\n", str2);
	
	return 0;
}