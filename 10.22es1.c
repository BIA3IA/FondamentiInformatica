/*Scrivere un programma che chiede all'utente una stringa di al
massimo 30 caratteri. Il programma identifica nella stringa tutte le
sotto-sequenze di sole cifre in posizioni consecutive, e visualizza
le lunghezze della sotto-sequenza più lunga e di quella più corta.
Se per esempio la stringa di ingresso è "a1245b645c7de45", il
programma visualizza i valori 4 e 1 (avendo individuato le sotto-
sequenze "1245" e "7"). Nel caso la stringa non contenga alcuna
cifra, il programma visualizza il messaggio "0 0".*/

#include <stdio.h>
#include <string.h>

#define LUNS 30

int main(){
	char str[LUNS+1];
	int conto, i, max, min, len, numeri;

	scanf("%s", str);

	len=strlen(str);

	for(i=0, numeri=0; i<len; i++)
		if(str[i]<='9' && str[i]>='0')
			numeri++;

	conto=0;
	min=numeri;
	max=0;

	for(i=0; i<len; i++){
		if(str[i]<='9' && str[i]>='0'){
			conto++;
			if(conto>max){
				max=conto;
			}
		} else if(conto!=0 && conto<min){
			min=conto;
			conto=0;
		}
	}

	printf("%d %d\n", max, min);

	return 0;
}