/*Scrivere un programma che chiede all'utente due stringhe s e t di al
massimo 30 caratteri. Il programma conta quante volte la stringa t
compare come sottostringa all'interno della stringa s e stampa a
video il risultato.*/

#include <stdio.h>
#define LUNS 30

int main(){
	char s[LUNS+1], t[LUNS+1];
	int i, j, k, uguali, conto;

	scanf("%s %s", s, t);

	for(i=0, conto=0; s[i]!='\0'; i++){
		j=0;
		if(s[i]==t[j]){
			for(k=i+1, j=1, uguali=1; t[j]!='\0' && s[k]!='\0' && uguali; k++, j++){
				if(t[j]!=s[k])
					uguali=0;
			}
			if(uguali==1)
			conto++;
		}
	}

	printf("%d\n", conto);

	return 0;
}