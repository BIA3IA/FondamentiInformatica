/*Scrivere un programma che chiede all'utente una stringa di al
massimo 30 caratteri. Il programma individua la sequenza più lunga
di caratteri consecutivi tutti uguali e ne visualizza la lunghezza
ed il carattere che si ripete.
Nel caso ci siano più di una sequenza a pari lunghezza massima, il
programma visualizza i dati (dimensione e valore ripetuto)
dell'ultima sequenza individuata.*/

#include<stdio.h>
#include<string.h>

#define DIM 30

int main(){
	char str[DIM+1], c_max;
	int i, len, conto, max;

	scanf("%s", str);
	len=strlen(str);
	
	for(i=0, conto=1, max=0; i<len; i++){
		if(str[i]==str[i+1]){
			conto++;
			if(conto>=max){
				max=conto;
				c_max=str[i];
			}
		} else {
			conto=1;
		}	
	}	

	printf("%d %c\n", max, c_max);

	return 0;
}