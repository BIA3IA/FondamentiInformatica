/*Scrivere un programma che acquisisce una stringa s1 di massimo 50
caratteri e ne costruisce una nuova s2 copiando il contenuto di s1
senza le vocali. Infine il programma visualizza s2. Esempio:
s1="straniero" -> s2="strnr".*/

#include<stdio.h>
#define LUNS 50

int main() {
	char s1[LUNS+1], s2[LUNS+1];
	int i;

	scanf("%s", s1);

	for(i=0; s1[i]!='\0'; i++){
		if(s1[i]!='a' && s1[i]!='e' && s1[i]!='i' && s1[i]!='o' && s1[i]!='u')
			s2[i]=s1[i];
	}
	
	s2[i]='\0';

	for(i=0; s1[i]!='\0'; i++)
		printf("%c", s2[i]);

	printf("\n");

	return 0;
} 
