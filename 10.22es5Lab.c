/*crivere un programma che acquisisce una stringa di al massimo
20 caratteri composta da sole parentesi tonde '(' e ')'. Il
programma verifica se la stringa è "ben parentesizzata" in base alla
definizione studiata nelle lezioni di matematica a scuola. Il
programma stampa un apposito messaggio a video con il responso o un
messaggio di errore nel caso la stringa contenga un carattere
diverso dalle parentesi tonde.
Si ricordi che una stringa è ben parentesizzata se:
* la stringa è vuota
* ad ogni parentesi aperta ne corrisponde una chiusa, e tra di esse
la sottostringa è anch'essa ben parentesizzata
* la stringa è una concatenazione (cioè una successione) di due
sottostringhe ben parentesizzate
Esempi di stringhe ben parentesizzate sono:
()
()()()
(())()
Esempi di stringhe NON ben parentesizzate sono:
()( - una parentesi aperta di troppo
(()() - una parentesi aperta di troppo
)() - una parentesi chiusa di troppo
)( - una parentesi chiusa di troppo (e poi una parentesi aperta di
troppo)
SUGGERIMENTO: bisogna contare quante coppie parentesi () vengono
annidate l'una all'interno dell'altra. In particolare, scorrendo la
stringa una volta, si inizializza all'inizio il livello di
annidamento (un contatore!) a zero; ogni volta che si incontra una
parentesi aperta ( aumenta di uno il livello di annidamento delle
parentesi, mentre ogni volta che si incontra una parentesi chiusa )
diminuisce di uno il livello di annidamento delle parentesi. Una
stringa è ben parentesizzata se alla fine della scansione della
stringa, il livello di annidamento finale è pari a zero; inoltre non
deve mai capitare che il livello di annidamento diventi negativo
(parentesi chiuse in eccesso!).*/

#include <stdio.h>

int main(){

	return 0;
