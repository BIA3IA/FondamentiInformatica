/*Scrivere un programma che chiede all'utente il nome di un file di
testo (una stringa di al massimo 30 caratteri). Il file contiene una
serie di righe di testo (0 o più), ciascuna delle quali (anche
l'ultima) terminata da un a-capo. Ciascuna riga contiene una
sequenza di parole (0 o più), ciascuna di lunghezza indefinita,
separate da singoli spazi. Il programma legge il contenuto del file
e visualizza per ciascuna riga letta il numero di caratteri diversi
dai separatori (spazio e a-capo) ed il numero di parole. Gestire
opportunamente gli eventuali casi di errore mediante la
visualizzazione di messaggi a video.
Esempio:
Se il file contiene il seguente testo:
In questa riga ci sono 7 parole
Mentre qui 3
Ora 2
Ancora due
Il programma stamperà a video:
Riga 1: 25 caratteri, 7 parole
Riga 2: 10 caratteri, 3 parole
Riga 3: 4 caratteri, 2 parole
Riga 4: 0 caratteri, 0 parole
Riga 5: 9 caratteri, 2 parole
Variante: modificare il programma per gestire correttamente la
presenza spazi ripetuti.*/

#include<stdio.h>

#define LUNS 30
  
int main() {
	char name[LUNS+1], c;
	FILE *fp;
	int conto, parola, i;

	scanf("%s", name);
	fp=fopen(name, "r");

	if(fp){
		fscanf(fp, "%c", &c);
		if(!feof(fp)){
			parola=0;
			conto=0;
			i=1;
			while(!feof(fp)){
				if(c!=' ' && c!='\n')
					conto++;
				else if (c==' ' && c=='\n')
					parola++;
				if (c=='\n'){
					printf("Riga %d: %d caratteri, %d parole\n", i, conto, parola);
					parola=0; 
					conto=0;
					i++;
				} 
				fscanf(fp, "%c", &c);
			}
		} else
			printf("File vuoto\n");
		fclose(fp);
	} else
		printf("Errore apertura file\n");


	return 0;
}

