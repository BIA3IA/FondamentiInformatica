/*Scrivere un programma che acquisisce una stringa s di al massimo 30
caratteri e verifica se è composta soltanto da lettere dell'alfabeto
minuscolo e da spazi.*/

#include <stdio.h>
#define LUNS 30

int main(){
	char s1[LUNS+1];
	int i, j;

	scanf("%[^\n]", s1);


	for(i=0, j=1; s1[i]!='\0' && j; i++){
		if(s1[i]==' ' || !(s1[i]>='a' && s1[i]<='z'))
			j=0;
	}

	if (j==1)
		printf("Solo caratteri minuscoli e spazi.\n");
	else 
		printf("Non solo caratteri minuscoli e spazi.\n");

	return 0;
}