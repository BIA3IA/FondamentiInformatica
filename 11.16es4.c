/*a) Scrivere una funzione analizzastringa (ed il relativo prototipo)
che riceve come parametro una stringa. La funzione restituisce 1 se
la stringa è lunga più di 5 caratteri e contiene almeno 2 cifre
numeriche ed un carattere che non sia una cifra; in caso negativo la
funzione restituisce 0.
b) Scrivere un programma che apre in lettura un file di testo
testo.txt contenente una serie di lunghezza indefinita di parole
ciascuna lunga al massimo 15 caratteri ed in scrittura un secondo
file risultato.txt. Il programma legge ciascuna parola contenuta in
testo.txt e la scrive in risultato.txt soltanto se l'invocazione
della funzione analizzastringa su di essa porta ad un risultato
positivo (la funzione restituisce 1).
Ad esempio, se il file contiene il seguente testo:
Ciao45 baubau 2345678 esame2020 trallallero1 bimbumbam345 a234
Il programma salverà in risultato.txt il seguente testo:
Ciao45
esame2020
bimbumbam345*/

#include<stdio.h>

#define MINC 5
#define MINN 2
#define FN "testo.txt"
#define FN2 "risultato.txt"
#define LUNS 15

int analizzastringa(char[]);

int main() {
	FILE *fp, *fp2;  
	char s[LUNS+1]

	fp=fopen(FN, "r");
	
	if(fp){
		fp2=fopen(FN2, "w");
		if(fp2){
			fscanf(fp, "%s", s);
			while(!feof(fp)){
				if(analizzastringa(s))
					fprintf(fp2, "s\n", s);
				fscanf(fp, "%s", s);
			}
			fclose(fp2);
		} else
			printf("ERRORE FILE 2.\n");
		fclose(fp);
	} else
		printf("ERRORE FILE 1.\n");
	
	return 0;
}

int analizzastringa(char str[]){
	int i, ncif, ok;

	for(i=0; str[i]!='\0'; i++){
		if(str[i]>='0' && str[i]<='9')
			ncif++;
	}

	if(i>MINC && ncif>=MINN && i>ncif)
		ok=1;
	else 
		ok=0;

	return ok;
}
