/*Si vuole realizzare un programma che permetta di effettuare
alcune operazioni geometriche su rettangoli.
Dichiarare un tipo di dato per rappresentare un rettangolo. Un
rettangolo è descritto dal vertice inferiore sinistro e da quella
del vertice superiore destro (due punti).
Un punto è definito in termini di coordinate x e y (due interi) su
uno spazio cartesiano bidimensionale.
Scrivere un programma che esegua le seguenti elaborazioni in
sequenza:
1 - Acquisisce da tastiera i dati di due rettangoli, verificandone
la correttezza delle coordinate (la prima coordinata è
effettivamente in basso a sinistra rispetto alla seconda) e se non
valide le richiede.
2 - Calcola e visualizza l'area di ciascun rettangolo.
3 - Verifica se i due rettangoli sono intersecati e visualizza
l'esito del test.
4 - Se sono intersecati, costruisce in una nuova variabile il
rettangolo intersezione (prestare attenzione a tutte le casistiche
legate alla posizione di un rettangolo rispetto all'altro) e ne
visualizza le coordinate a schermo.
5 - Se sono intersecati, calcola e visualizza l'intersezione
sull'unione, ovvero la frazione (quindi un valore in virgola mobile)
tra l'area dell'intersezione tra i due rettangoli e l'area totale
della forma geometrica generata dai due rettangoli sovrapposti.*/

#include<stdio.h>

typedef struct{
	int x, y;
} punto_t;

typedef struct{
	punto_t sx, dx;
} rettangolo_t;

void input(rettangolo_t*);
int area(rettangolo_t);
int intersecati(rettangolo_t, rettangolo_t);
void coordinateinter(rettangolo_t, rettangolo_t, rettangolo_t*);
void output(rettangolo_t*);
float frazione(int, int, int);

int main() {
	rettangolo_t rett1, rett2, rettinters;
	int a1, a2, inters, a3;
	float fraz;

	input(&rett1);
	input(&rett2);
	a1=area(rett1);
	a2=area(rett2);
	inters=intersecati(rett1, rett2);
	if(inters){
		coordinateinter(rett1, rett2, &rettinters);
		output(&rettinters);
		a3=area(rettinters);
		fraz=frazione(a1, a2, a3);
		printf("Intersezione sull'unione: %f\n", fraz);
	} else
		printf("Non si intersecano\n");
	
	return 0;
}

void input(rettangolo_t *ret){

	do{
		printf("Vertice inferiore sinistro: ");
		scanf("%d %d", &(*ret).sx.x, &(*ret).sx.y);
		printf("\nVertice superiore destro: ");
		scanf("%d %d", &(*ret).dx.x, &(*ret).dx.y);
		printf("\n");
	} while((*ret).sx.x>(*ret).dx.x || (*ret).sx.y>(*ret).dx.y);

}

int area(rettangolo_t ret){
	int a;

	a=(ret.dx.x-ret.sx.x)*(ret.dx.y-ret.sx.y);

	return a;
}
 
int intersecati(rettangolo_t rett1, rettangolo_t rett2){
	int inters;

	if((rett1.sx.x<=rett2.sx.x && rett1.dx.x>rett2.sx.x && rett1.sx.y<=rett2.sx.y && rett1.dx.x>rett2.sx.x)
		|| (rett1.sx.x<rett2.dx.x && rett1.dx.x>=rett2.dx.x && rett1.sx.y<rett2.dx.y && rett1.dx.x>=rett2.dx.x))
		inters=1;
	else
		inters=0;

	return inters;
}

void coordinateinter(rettangolo_t rett1, rettangolo_t rett2, rettangolo_t *rettinters){

	if(rett1.sx.x<=rett2.sx.x && rett1.dx.x>rett2.sx.x && rett1.sx.y<=rett2.sx.y && rett1.dx.x>rett2.sx.x){
		(*rettinters).sx.x=rett2.sx.x;
		(*rettinters).sx.y=rett2.sx.y;
		(*rettinters).dx.x=rett1.dx.x;
		(*rettinters).dx.y=rett1.dx.y;
	} else{
		(*rettinters).sx.x=rett1.sx.x;
		(*rettinters).sx.y=rett1.sx.y;
		(*rettinters).dx.x=rett2.dx.x;
		(*rettinters).dx.y=rett2.dx.y;
	}

}

void output(rettangolo_t *rett){
	printf("Vetice inferiore sinistro: %d %d\nVertice superiore destro: %d %d\n", (*rett).sx.x, (*rett).sx.y, (*rett).dx.x, (*rett).dx.y);
}

float frazione(int a1, int a2, int a3){
	float fraz; 
	int a4;

	a4=a1+a2-a3;
	fraz=(float)a3/a4;

	return fraz;
}
