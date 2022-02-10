/*Scrivere un programma che visualizza la tabella pitagorica.*/

#include<stdio.h>
#define MAX 10

int main() {
	int i, j;

	i=1;
	while(i<=MAX){
		j=1;
		while(j<=MAX){
			printf("%4d", i*j);
			j++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
}	