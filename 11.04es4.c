/*Scrivere un sottoprogramma che riceve come parametri due array di
caratteri, il primo contenente una stringa ed il secondo vuoto.
Assumendo che la stringa sia composta da una sequenza di parole
separate da spazi, il sottoprogramma inverte di ordine le parole
della stringa e salva il risultato nel secondo array.
Esempio: Se il programma riceve come stringa "ciao come stai", il
sottoprogramma restituisce "stai come ciao".
Scrivere un programma che acquisisce una stringa di al massimo 100
caratteri contenente anche spazi, invoca il sottoprogramma sopra
definito e visualizza il risultato.*/

#include<stdio.h>
#include<string.h>

#define LUNS 100

void inverti(char[], char[]);

int main() {
	char a[LUNS+1], b[LUNS+1];
	int len;

	scanf("%[^\n]", a);

	inverti(a, b);

	printf("%s\n", b);
	
	return 0;
}

void inverti(char str[], char vuoto[]){
	int i, j, len, k, lett;

	len=strlen(str);

	for(i=len-1, j=0, lett=0; i>=0; i--){
		if(str[i]!=' ' && i!=0)
			lett++;
		else if(str[i]==' '){
			for(k=i+1; j<lett; k++, j++){
				vuoto[j]=str[k];
			}
			vuoto[j]=' ';
			lett++;
			j++;
		} else if(i==0){
			for(k=0; j<len; k++, j++){
				vuoto[j]=str[k];
			}
			vuoto[len]='\0';
		}	
	}


}