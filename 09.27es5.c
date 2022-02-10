/*Si consideri un corso X in cui l'esame è composto da due compitini, 
ciascuno valutato in trentesimi. Condizione necessaria per essere 
promossi è che entrambi i compitini siano sufficienti e in tal caso 
il voto finale è calcolato come media dei due valori. Si noti che il 
voto finale è un intero e quindi l'eventuale parte decimale non va 
considerata.
Scrivere un programma che acquisisce due valori interi che 
rappresentano i punteggi ottenuti da uno studente nelle due prove in 
itinere; si assuma in prima istanza che l'utente inserisca 
correttamente dei valori compresi tra 0 e 30.
Il programma valuta se lo studente è stato promosso o bocciato 
visualizzando un apposito messaggio; in caso positivo il programma 
deve anche visualizzare il voto ottenuto. 
Migliorare poi il programma aggiungendo un controllo di validità dei 
dati inseriti, cioè che ciascun punteggio deve essere compreso tra 0 
e 30; nel caso almeno uno dei dati sia non consistente, il programma 
deve visualizzare un messaggio di errore.*/

#include<stdio.h>
#define N_VOTI 2

int main() {
	int voto1, voto2, media;

	scanf("%d %d", &voto1, &voto2);

	if(voto1>=0 && voto1<=30 && voto2>=0 && voto2<=30){
		if (voto1>=18 && voto2>=18){
			media=(voto1+voto2)/N_VOTI;
			printf("PROMOSSO. VOTO: %d\n", media);
		} else 
			printf("BOCCIATO\n");
	} else 
		printf("ERRORE\n");
	
	return 0;
}	