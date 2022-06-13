/*Il metodo di Euclide per il calcolo del MCD tra due numeri m e n
dice che
MCD(m,n)=m se m=n
MCD(m,n)=MCD(m-n,n) se m>n
MCD(m,n)=MCD(m,n-m) se m<n
Scrivere un sottoprogramma ricorsivo che calcola e restituisce il
MCD di due numeri interi positivi ricevuti come parametro mediante
il metodo di Euclide.
Scrivere un programma che chiede due valori interi positivi (che si
assume vengano inseriti correttamente), ne calcola il MCD mediate il
sottoprogramma sopra realizzato e visualizza il risultato.*/

#include<stdio.h>

int MCD(int, int);

int main() {
	int n, m, mcd;

	scanf("%d %d", &m, &n);
	mcd=MCD(m, n);
	printf("%d\n", mcd);
	
	return 0;
}

int MCD(int m, int n){
	if (m==n)
		return m;
	else if(m>n)
		return MCD(m-n,n);
	return MCD(m,n-m);  
}
