/*Scrivere un sottoprogramma che riceve come parametro un intero
positivo N, alloca dinamicamente e restituisce una matrice quadrata
NxN di valori interi. Il sottoprogramma restituisce NULL nel caso di
errore di allocazione (deallocando l'eventuale memoria già
allocata).
Scrivere un sottoprogramma che riceve come parametro una matrice
bidimensionale di valori interi allocata dinamicamente ed il suo
numero di righe, e ne libera la memoria.
Scrivere un programma che chiede all'utente la dimensione di una
matrice quadrata m e poi i dati per popolarla; non sapendo a priori
le dimensioni della matrice m, il programma allocherà la matrice
mediante il sottoprogramma sopra definito. Il programma cerca nella
matrice m la sottomatrice di dimensione massima che parte da m[0][0]
e la cui somma dei valori è pari a zero e, se esiste, la salva in
una seconda matrice allocata anch'essa dinamicamente. In seguito, il
programma stampa a video la nuova matrice calcolata (se esiste),
libera la memoria e termina. Gestire opportunamente gli eventuali
errori nell'allocazione della memoria.
Esempio: se l'utente inserisce la matrice 3x3:
1 2 3
-1 -2 3
3 3 3
La sottomatrice a somma nulla di dimensione massima che parte da
m[0][0] è:
1 2
-1 -2*/

#include <stdio.h>
#include <stdlib.h>

int** alloc(int);

void libera(int**, int);

int main(){
    int **m, **m1;
    int dim, i, j, dim1, sum, dim2;
   
   scanf("%d", &dim);
   
   m = alloc(dim);
   
   
   for(i=0; i<dim; i++){
       for(j=0; j<dim; j++){
           scanf("%d", (*(m+i)+j));
       }
   }
   
    
   for(dim1=1; dim1<=dim; dim1++){
       for(i=0, sum=0; i<dim1; i++){
           for(j=0; j<dim1; j++){
               sum += m[i][j];
           }
       }
       if(sum==0){
           dim2 = dim1;
           m1 = alloc(dim2);
           for(i=0; i<dim2; i++){
               for(j=0; j<dim2; j++){
                   m1[i][j] = m[i][j];
               }
           }
       }
   }
   
   
   for(i=0; i<dim2; i++){
        for(j=0; j<dim2; j++){
            printf("%d", m1[i][j]);
          }
    }
    
    libera(m, dim);
    libera(m1, dim2);
    
  return 0;
}

int** alloc(int n){
    int i, j, **m;
    
    m = malloc(sizeof(int*)*n);
    if(m){
        for(i=0; i<n; i++){
            m[i] = malloc(sizeof(int)*n);
            if(m[i]){
                for(j=0; j<n; j++){
                    m[i][j] = 0;
                }
            } else {
                printf("Errore");
            }
        }
        return m;
    } else {
        printf("errore");
        return NULL;
        free(m);
    }
}

void libera(int** m, int r){
    int i;
    if(m){
         for(i=0; i<r; i++){
            free(m[i]);
        }
        free(m);
    } else {
        printf("Errore");
    }
}
