/*Scrivere un programma che acquisisce una stringa di al massimo 30
caratteri ed un numero n. Il programma estrae il suffisso della
stringa di lunghezza n salvandolo in un nuovo array e visualizza il
risultato. Se n è maggiore della lunghezza della stringa, il
suffisso sarà rappresentato dalla stringa stessa*/

#include<stdio.h>
#include<string.h>

#define LUNS 30

int main() {
	char str1[LUNS+1], str2[LUNS+1];
	int n, i, len;

	scanf("%s", str1);
	scanf("%d", &n);

	len=strlen(str1);

	if(n>len){
		for(i=0; i<len; i++)
			str2[i]=str1[i];
	} else {
		for(i=len-n; i<len; i++)
			str2[i]=str1[i];
	}
	
	str2[i]='\0';

	for(i=0; i<len; i++)
		printf("%c", str2[i]);

	printf("\n");

	return 0;
}