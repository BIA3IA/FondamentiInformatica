/*Scrivere un programma che acquisisce due stringhe di al più 30
caratteri e le concatena in un terzo array e visualizza il
risultato.*/

#include<stdio.h>

#define LUNS 30

int main() {
	char str1[LUNS+1], str2[LUNS+1], str3[(LUNS*2)+1];
	int lun, i;

	scanf("%s %s", str1, str2);

	for(i=0; str1[i]!='\0'; i++)
		str3[i]=str1[i];

	for(lun=i, i=0; str2[i]!='\0'; i++){
		str3[lun+i]=str2[i];
	}

	str3[lun+i]='\0';

	printf("%s\n", str3);

	return 0;
}