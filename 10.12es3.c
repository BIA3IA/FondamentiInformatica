/* Realizzare un programma per la gestione di una serie di rilevazioni
di temperature sui piani di un edificio. Ciascun rilevazione
specifica il numero del piano, l'ora della misura (una stringa di al
massimo 8 caratteri) e la temperatura letta (un numero intero).
Definire un tipo di dato strutturato per rappresentare ciascuna
rilevazione.
In seguito, scrivere un programma per la gestione delle rilevazioni.
Il programma dovrà chiedere all'utente di specificare il numero di
rilevazioni da inserire (massimo 100 e nel caso l'utente non
inserisca un valore valido il programma lo richiede) e poi inserire
le rilevazioni (si assume che i dati siano inseriti correttamente in
base all'ora). In seguito il programma dovrà chiedere all'utente il
numero di un piano. Il programma visualizzerà gli intervalli di
tempo per cui la temperatura di quel piano è stata inferiore ai 22
gradi. Si noti che è necessario stampare solo l'ora relativa alla
prima e all'ultima rilevazione di ciascun intervallo.
ESEMPIO:
Numero di rilevazioni: 8
Rilevazioni:
1 10:30:00 23
2 10:35:00 21
2 11:00:00 20
1 11:20:00 23
2 11:34:00 21
2 12:30:00 24
1 12:40:00 23
2 14:30:00 21
Piano da analizzare: 2
Risultato:
10:35:00 -> 11:34:00
14:30:00 -> 14:30:00
 */

#include <stdio.h>
#define LUNS 8
#define MAX 100
#define INF 22

typedef struct {
	int piano, temp;
	char ora[LUNS+1];
} ril_t;

int main(){
	ril_t ril[MAX], rilpiano[MAX];
	int num, i, piano, j, nril, inf, fineinf;

	do{
		printf("Numero di rilevazioni: ");
		scanf("%d", &num);
	}while (num<=0 || num>MAX);

	printf("\nRilevazioni:\n");
	for(i=0; i<num; i++){
		scanf("%d", &ril[i].piano);
		scanf("%s", ril[i].ora);
		scanf("%d", &ril[i].temp);
	}


	printf("\nNumero di Piano: ");
	scanf("%d", &piano);

	for(i=0, j=0; i<num; i++){
		if(piano==ril[i].piano){
				rilpiano[j]=ril[i];
				j++;
		}
	}

	nril=j;

	printf("\nRisultato:\n");

	for(i=0, fineinf=0; i<nril; i++){
		if(rilpiano[i].temp<INF){
			fineinf=i;
			for(j=i+1, inf=1; j<nril && inf; j++){
				if(rilpiano[j].temp>=INF){
					inf=0;
				} else {
					fineinf=j;
				}
			}
		}
		printf("%s --> %s\n", rilpiano[i].ora, rilpiano[fineinf].ora);
		inf=1;
		i=j-1;

	}

	return 0;
}