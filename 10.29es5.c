/*Un dato sistema informatico richiede che ciascun username sia una
stringa composta da almeno N caratteri, di cui almeno NL lettere
dell'alfabeto maiuscolo o minuscolo e non contenga alcun carattere
speciale appartenente ad una stringa di controllo SYMB (per esempio
"%:;-+").
Scrivere un sottoprogramma che riceve come parametri una stringa
rappresentante un username, gli interi N ed NL e la stringa SYMB; il
sottoprogramma restituisce 1 se la stringa rappresenta un username
valida, altrimenti 0.
Esempio: con N=8, NL=5 e SYMB="%:;-+", "Domani.898" è un username
valida, mentre "domani:898" e "do.898" non lo sono.
Scrivere un programma che chiede all'utente una stringa di al
massimo 20 caratteri ed invoca il sottoprogramma sopra definito
specificando i seguenti valori per i parametri: N=8, NL=5 e
SYMB="%:;-+". Il sottoprogramma visualizza il risultato restituito   
dal sottoprogramma. */

#include<stdio.h>
#include<string.h>

#define NU 8
#define NLU 5
#define LUNS 20

int valido(char*, int, int, char*);


int main() {
	char str[LUNS+1];
	int val;

	scanf("%s", str);

	val=valido(str, NU, NLU, "%:;-+");

	printf("%d\n", val);

	return 0;
}

int valido(char *str, int N, int NL, char *SYMB){
	int i, count, k, val, symb;

	if(strlen(str)>=N){
		for(i=0, count=0, val=1, symb=0; i<strlen(str) && !symb; i++){
			if(*(str+i)>='A' && *(str+i)<='z')
				count++;
			else {
				for(k=0; *(SYMB+k)!='\0' && !symb; i++){
					if(*(str+i)==*(SYMB+k))
						symb=1;
				}
			}
		}
		if(count<=NL || symb)
			val=0;			
	} else 
		val=0;

	return val;
}
