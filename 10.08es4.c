/*Scrivere un programma che acquisisce due stringhe di al più 30
caratteri e verifica se sono uguali visualizzando un apposito
messaggio con il responso (1: uguali, 0: diverse).*/

#include<stdio.h>

#define LUNS 30

int main() {
	char str1[LUNS+1], str2[LUNS+1];
	int i, lun, uguali;

	scanf("%s %s", str1, str2);

	for(i=0; str1[i]!='\0' && str2[i]!='\0' &&  str1[i]==str2[i]; i++);

	if(str1[i]=='\0' && str2[i]=='\0')
		uguali=1;

	printf("%d\n", uguali);
	
	return 0;
} 

OPPURE 

#include <stdio.h>
#define LUNS 30

int main(){
	char str[LUNS+1], str2[LUNS+1];
	int i, j, uguali;

	scanf("%s %s", str, str2);

	for(j=0; str[j]!='\0'; j++);

	for(i=0; str2[i]!='\0'; i++);
	
	if(i!=j){
		uguali=0;
	} else {
		for(i=0, uguali=1; str[i]!='\0' && uguali; i++)
			if(str[i]!=str2[i])
				uguali=0;
	}

	printf("%d\n", uguali);


	return 0;
}
