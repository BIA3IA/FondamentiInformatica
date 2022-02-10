/*Scrivere un programma che chiede all'utente un valore intero 
positivo o nullo che rappresenta una durata di tempo in secondi. Il 
programma converte e visualizza la durata in termini di: N di 
giorni, N di ore, N di minuti, N di secondi. Per esempio, se 
l'utente inserisce il valore 76, il programma visualizzerà "0 
giorni, 0 ore, 1 minuti, 16 secondi".*/

#include<stdio.h>

int main() {
	int t_tot, t_giorni, t_ore, t_minuti, t_secondi;

	scanf("%d", &t_tot);

	t_secondi=t_tot%60;
	t_minuti=t_tot/60;
	t_ore=t_minuti/60;
	t_giorni=t_ore/24;
	t_minuti=t_minuti-t_ore*60;
	t_ore=t_ore-t_giorni*24;

	printf("giorni: %d ore:%d minuti:%d secondi: %d\n", t_giorni, t_ore, t_minuti, t_secondi);
	

	
	return 0;
}
