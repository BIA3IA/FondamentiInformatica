/*Scrivere un sottoprogramma che chiede all'utente una stringa e conta
e restituisce quante vocali contiene. Scrivere un programma che
chiede all'utente una stringa di al massimo 30 caratteri che può
contenere anche degli spazi, invoca su di essa il sottoprogramma
sopra definito e visualizza il risultat0. */

#include<stdio.h>

#define LUNS 30

int vocali(char*);

int main() {
	char str[LUNS+1];

	scanf("%[^\n]", str);

	printf("%d\n", vocali(str));
	
	return 0;
}

int vocali(char *str){
	int num, i;

	for(i=0, num=0; *(str+i)!='\0'; i++){
		if(*(str+i)=='a' || *(str+i)=='e' || *(str+i)=='i' || *(str+i)=='o' || *(str+i)=='u'){
			num++;
		}
	}

return num;
}