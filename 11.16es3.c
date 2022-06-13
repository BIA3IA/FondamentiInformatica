/*a) Scrivere un sottoprogramma convertinumero che riceve come
parametro una stringa str e due parametri interi num e valido
passati per indirizzo in cui salvare i risultati. Se str è composta
soltanto da cifre (char da '0' a '9'), il sottoprogramma converte la
stringa in un numero, la salva in num ed assegna 1 al parametro
valido. Altrimenti il sottoprogramma assegna 0 a valido e non
modifica num. NOTA: è vietato l'utilizzo di funzioni di conversione
quali atoi o sscanf.
b) Scrivere un programma che apre un file di testo testo.txt
contenente una serie di lunghezza indefinita di parole ciascuna
lunga al massimo 15 caratteri. Il programma legge ciascuna parola
contenuta nel file e, mediante il sottoprogramma convertinumero,
verifica se si tratta di una stringa composta solo da cifre e in
caso affermativo la converte in un numero. Il programma somma tutti
i numeri identificati e presenta a video il risultato finale.
Ad esempio, se il file contiene il seguente testo:
Ciao domani 120 10 alfa23 esame 5 informatica 34tre -34
Il programma stamperà a video il seguente messaggio:
135*/

#include<stdio.h>

#define LUNS 15

void convertinumero(char[], int*, int*);

int main() {
	FILE *fp;
	int num, conto, valido;
	char str[LUNS+1];

	fp=fopen("testo.txt", "r");

	if(fp){
		fscanf(fp, "%s", str);
		conto=0;
		while(!feof){	
			convertinumero(str, &num, &valido);
			if(valido)
				conto+=num;
			fscanf(fp, "%s", str);
		}
		printf("%d\n", conto);
		fclose(fp);
	} else  
		printf("Errore apertura.\n");
	
	return 0;
}

void convertinumero(char str[], int *num, int *valido){
	int i, tmp;

	for(i=0, *valido=1, tmp=0; str[i]!='\0' && *valido; i++){
		if(str[i]<='9' && str[i]>='0')
			tmp=tmp*10+(str[i]-'0');
		else 
			*valido=0;
	}

	if(*valido)
		*num=tmp;
}
