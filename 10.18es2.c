/*Scrivere un programma in C che acquisisce una stringa di al massimo
30 caratteri ed un numero n. Il programma estrae il suffisso della
stringa di lunghezza n salvandolo in un nuovo array e visualizza il
risultato. Se n è maggiore della lunghezza della stringa, il
suffisso sarà rappresentato dalla stringa stessa*/

#include<stdio.h>
#include<string.h>

#define DIM 30

int main() {
	char str1[DIM+1], str2[DIM+1];
	int n, i, j, lun;

	scanf("%s %d", str1, &n);

	lun=strlen(str1);

    for(i=lun-1, j=0; i>=lun-n && j<n; i--, j++){
        str2[n-1-j]=str1[i];
    }

	str2[n]='\0';

//	for(i=0; i<n; i++)
//		printf("%c", str2[i]);

	printf("%s", str2);

	printf("\n");
	
	return 0;
}