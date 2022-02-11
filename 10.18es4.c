/*Scrivere un programma che chiede all'utente una stringa di al
massimo 30 caratteri. Il programma identifica nella stringa tutte le
sotto-sequenze di sole cifre in posizioni consecutive, e visualizza
le lunghezze della sotto-sequenza più lunga e di quella più corta.
Se per esempio la stringa di ingresso è "a1245b645c7de45", il
programma visualizza i valori 4 e 1 (avendo individuato le sotto-
sequenze "1245" e "7"). Nel caso la stringa non contenga alcuna
cifra, il programma visualizza il messaggio "0 0".*/

#include<stdio.h>
#include<string.h>

#define DIM 30

int main() {
	char str[DIM+1];
	int i, min, max, count, numbers, len;

	scanf("%s", str);

	for(i=0, numbers=0; str[i]!='\0'; i++){
		if(str[i]>='0' && str[i]<='9')
			numbers++;
	}

	min=numbers;
	max=0;
	count=0;
	len=strlen(str);

	for(i=0; i<=len; i++){
		if(str[i]>='0' && str[i]<='9'){
			count++;
			if(count>max){
				max=count;
			}
		} else if (count!=0 && count<min){
			min=count;
			count=0;
		}
	}

	printf("%d %d\n", max, min);

	return 0;
}