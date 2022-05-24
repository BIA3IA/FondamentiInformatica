/*Scrivere un programma che acquisisce una stringa di al massimo 30
caratteri ed un numero n. Il programma estrae il suffisso della
stringa di lunghezza n salvandolo in un nuovo array e visualizza il
risultato. Se n è maggiore della lunghezza della stringa, il
suffisso sarà rappresentato dalla stringa stessa. */

#include <stdio.h>
#include <string.h>
#define MAX 30

int main(){
	char s[MAX+1], s2[MAX+1];
	int i, n, k, lun;

	scanf("%s %d", s, &n);

	lun=strlen(s);

	if(n>lun){
		for(i=0; s[i]!='\0'; i++)
			s2[i]=s[i];
	} else {
		for(i=lun-n, k=0; s[i]!='\0'; i++, k++)
			s2[k]=s[i];
	}

	s2[k]='\0';

	printf("%s\n", s2);

	return 0;
}
